/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : C40
*   Dependencies         : None
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 4.0.0
*   Build Version        : S32K3_RTD_4_0_0_HF02_D2407_ASR_REL_4_7_REV_0000_20240725
*
*   Copyright 2020 - 2024 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
 * @file       C40_Ip.c
 *
 * @addtogroup C40_IP
 * implement   C40_Ip.c_Artifact
 *
 * @{
 */

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "C40_Ip.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define C40_IP_VENDOR_ID_C                    43
#define C40_IP_AR_RELEASE_MAJOR_VERSION_C     4
#define C40_IP_AR_RELEASE_MINOR_VERSION_C     7
#define C40_IP_AR_RELEASE_REVISION_VERSION_C  0
#define C40_IP_SW_MAJOR_VERSION_C             4
#define C40_IP_SW_MINOR_VERSION_C             0
#define C40_IP_SW_PATCH_VERSION_C             0


/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and C40_Ip header file are of the same vendor */
#if (C40_IP_VENDOR_ID_C != C40_IP_VENDOR_ID_H)
    #error "C40_Ip.c and C40_Ip.h have different vendor ids"
#endif
/* Check if current file and C40_Ip header file are of the same Autosar version */
#if ((C40_IP_AR_RELEASE_MAJOR_VERSION_C    != C40_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (C40_IP_AR_RELEASE_MINOR_VERSION_C    != C40_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (C40_IP_AR_RELEASE_REVISION_VERSION_C != C40_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of C40_Ip.c and C40_Ip.h are different"
#endif
/* Check if current file and C40_Ip header file are of the same Software version */
#if ((C40_IP_SW_MAJOR_VERSION_C != C40_IP_SW_MAJOR_VERSION_H) || \
     (C40_IP_SW_MINOR_VERSION_C != C40_IP_SW_MINOR_VERSION_H) || \
     (C40_IP_SW_PATCH_VERSION_C != C40_IP_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of C40_Ip.c and C40_Ip.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/
/* Mask of failed address regions: A0-A5
   If the region is not present, the bit field is locked to 0
 */
#define C40_IP_REGION_0_MASK                        (FLASH_ADR_A0_MASK << 0U)
#define C40_IP_REGION_1_MASK                        (FLASH_ADR_A0_MASK << 1U)
#define C40_IP_REGION_2_MASK                        (FLASH_ADR_A0_MASK << 2U)
#define C40_IP_REGION_3_MASK                        (FLASH_ADR_A0_MASK << 3U)
#define C40_IP_REGION_4_MASK                        (FLASH_ADR_A0_MASK << 4U)
#define C40_IP_REGION_5_MASK                        (FLASH_ADR_A0_MASK << 5U)

#define C40_IP_FAILED_ADDRESS_REGION_MASK           (C40_IP_REGION_0_MASK  | \
                                                     C40_IP_REGION_1_MASK  | \
                                                     C40_IP_REGION_2_MASK  | \
                                                     C40_IP_REGION_3_MASK  | \
                                                     C40_IP_REGION_4_MASK  | \
                                                     C40_IP_REGION_5_MASK)


/*! @brief the number of bytes uses to compare (8 byte) */
#define C40_IP_SIZE_8BYTE            (8U)

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/
/**
 * @brief Pointer to current flash module configuration set
 */
static const C40_Ip_ConfigType * C40_Ip_pConfigPtr;

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/
static uint32 C40_Ip_u32SectorId;
static uint32 C40_Ip_u32BitPosition;
static uint32 C40_Ip_u32LogicalAddressCheckFail;

static boolean C40_Ip_bAsync = TRUE;

static C40_Ip_StatusType C40_Ip_eReadStatus = C40_IP_STATUS_ERROR;
/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

static boolean X86_Init(void);
static boolean X86_Read(uint32 Address, uint8 *Data, uint32 Size);
static boolean X86_Write(uint32 Address, const uint8 *Data, uint32 Size);
static boolean X86_Erase(uint32 Address, uint32 Size);

static inline void C40_Ip_FlashAccessCalloutStart(void);
static inline void C40_Ip_FlashAccessCalloutFinish(void);

static inline boolean C40_Ip_ValidCodeAddress(uint32 Address);
static inline boolean C40_Ip_ValidDataAddress(uint32 Address);
static inline boolean C40_Ip_ValidAddress(uint32 Address);
static inline boolean C40_Ip_ValidRangeAddress(uint32 StartAddress,
                                               uint32 Length
                                              );


static uint32 C40_Ip_GetSectorID(C40_Ip_VirtualSectorsType VirtualSector);
static uint32 C40_Ip_GetBaseAddressOfSector(C40_Ip_VirtualSectorsType VirtualSectors);
static C40_Ip_FlashBlocksNumberType C40_Ip_GetCodeBlockNumber(uint32 TargetAddress);

static inline uint8 C40_Ip_ReadData8(uint32 Address);
static inline uint16 C40_Ip_ReadData16(uint32 Address);
static inline uint32 C40_Ip_ReadData32(uint32 Address);
static inline uint64 C40_Ip_ReadData64(uint32 Address);
static uint32 C40_Ip_ReadData(uint32 ReadAddress,
                              uint8 *DesAddressPtr,
                              uint32 SizeLeft
                             );

static C40_Ip_StatusType C40_Ip_ReadCheckInputParams(uint32 Length,
                                                     const uint8 *DestAddressPtr
                                                    );
static C40_Ip_StatusType C40_Ip_CheckReadCompareStatus(uint32 ReadAddress,
                                                       boolean CompareResult
                                                      );

static void C40_Ip_ProgramVerify(uint32 Address,
                                 const uint8 *Data,
                                 uint32 Size
                                );
static void C40_Ip_EraseVerify(uint32 Address,
                               uint32 Size
                              );
static uint32 C40_Ip_CompareData(uint32 ReadAddress,
                                 uint32 DataAddress,
                                 uint32 SizeLeft,
                                 boolean *CompareResult
                                );
static uint32 C40_Ip_CompareBlank(uint32 ReadAddress,
                                  uint32 SizeLeft,
                                  boolean *CompareResult
                                 );


#if (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED)

static inline C40_Ip_StatusType C40_Ip_MainInterfaceSectorErasePreCheck(C40_Ip_VirtualSectorsType VirtualSector);

static inline C40_Ip_StatusType C40_Ip_MainInterfaceWritePreCheck(uint32 LogicalAddress,
                                                                  uint32 Length,
                                                                  const uint8 *SourceAddressPtr
                                                                 );
#endif /* STD_ON == C40_IP_MAIN_INTERFACE_ENABLED */

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/**
 * Function Name    C40_Ip_FlashAccessCalloutStart
 * Description      Call the callout function if it was configured
 */
static inline void C40_Ip_FlashAccessCalloutStart(void)
{
    if (NULL_PTR != C40_Ip_pConfigPtr->StartFlashAccessNotifPtr)
    {
        C40_Ip_pConfigPtr->StartFlashAccessNotifPtr();
    }
}

/**
 * Function Name    C40_Ip_FlashAccessCalloutFinish
 * Description      Call the callout function if it was configured
 */
static inline void C40_Ip_FlashAccessCalloutFinish(void)
{
    if (NULL_PTR != C40_Ip_pConfigPtr->FinishedFlashAccessNotifPtr)
    {
        C40_Ip_pConfigPtr->FinishedFlashAccessNotifPtr();
    }
}

/**
 * Function Name    C40_Ip_ValidCodeAddress
 * Description      Checks the address is a valid Code flash address
 */
static inline boolean C40_Ip_ValidCodeAddress(uint32 Address)
{
    /* Check if it is within the program flash address space or not */
    return ( (C40_IP_CODE_BLOCK_0_BASE_ADDR <= (Address)) && ((Address) <= C40_IP_CODE_BLOCK_END_ADDR) );
}

/**
 * Function Name    C40_Ip_ValidDataAddress
 * Description      Checks the address is a valid Data flash address
 */
static inline boolean C40_Ip_ValidDataAddress(uint32 Address)
{
    /* Check if it is within the data flash address space or not */
    return ( (C40_IP_DATA_BLOCK_BASE_ADDR <= (Address)) && ((Address) <= C40_IP_DATA_BLOCK_END_ADDR) );
}

/**
 * Function Name    C40_Ip_ValidAddress
 * Description      Checks the address is a valid UTest address
 */
static inline boolean C40_Ip_ValidAddress(uint32 Address)
{
    /* Check if it is within the program flash or data flash or UTest space or not */
    return ( C40_Ip_ValidCodeAddress(Address) || C40_Ip_ValidDataAddress(Address) );
}

/**
 * Function Name    C40_Ip_ValidRangeAddress
 * Description      Checks both start and end address are within the Program or Data or UTest flash space,
 *                  using before Read/Compare/Write operations
 */
static inline boolean C40_Ip_ValidRangeAddress(uint32 StartAddress,
                                               uint32 Length
                                              )
{
    boolean RetVal;
    uint32 EndAddress = StartAddress + Length - 1UL;

    /* The start and end address must be within the program flash or data flash or UTest space */
    if (C40_Ip_ValidCodeAddress(StartAddress) && C40_Ip_ValidCodeAddress(EndAddress))
    {
        RetVal = (boolean)TRUE;
    }
    else if (C40_Ip_ValidDataAddress(StartAddress) && C40_Ip_ValidDataAddress(EndAddress))
    {
        RetVal = (boolean)TRUE;
    }
    else
    {
        /* Invalid memory range */
        RetVal = (boolean)FALSE;
    }

    return RetVal;
}


/**
 * Function Name    C40_Ip_GetSectorID
 * Description      Get sector ID base on Fls_VirtualSector
 */
static uint32 C40_Ip_GetSectorID(C40_Ip_VirtualSectorsType VirtualSector)
{
    uint32 SectorIndex;
    uint32 SectorPosition;


    if ((uint32)VirtualSector < C40_IP_MAX_DATA_SECTOR)
    {
        /* Sector is in the Data Block */
        C40_Ip_u32SectorId = (uint32)VirtualSector;
    }
    else if (C40_IP_MAX_VIRTUAL_SECTOR == (uint32)VirtualSector)
    {
        /* Sector is in Utest */
        C40_Ip_u32SectorId = (uint32)VirtualSector - C40_IP_MAX_VIRTUAL_SECTOR;
    }
    else
    {
        SectorIndex    = (uint32)VirtualSector - C40_IP_MAX_DATA_SECTOR;
        /* the position in a total of 128 sectors 8KB per 1MB block */
        /*                            256 sectors 8KB per 2MB block */
        SectorPosition = SectorIndex & (C40_IP_NUM_OF_SECTOR_PER_BLOCK - 1U);

        /* For 1 MB blocks, the first 768KB (96 sectors 8KB) is protected with super sector granularity */
        /* For 2 MB blocks, the first 1972KB (224 sectors 8KB) is protected with super sector granularity */
        if (SectorPosition < (C40_IP_NUM_OF_SUPPER_SECTOR_PER_BLOCK * 8U))
        {
            /* Sector is in the Super Sector zone: 1 Super Sector 64KB = 8 sectors 8KB */
            C40_Ip_u32SectorId = SectorPosition >> 3U;  /* divide by 8 */
        }
        else
        {
            /* Sector is in the 8KB Sector zone */
            C40_Ip_u32SectorId = SectorPosition - (C40_IP_NUM_OF_SUPPER_SECTOR_PER_BLOCK * 8U);
        }
    }

    return C40_Ip_u32SectorId;
}

/**
 * Function Name    C40_Ip_GetBaseAddressOfSector
 * Description      Get baseAddress of sector
 */
static uint32 C40_Ip_GetBaseAddressOfSector(C40_Ip_VirtualSectorsType VirtualSectors)
{
    uint32 BaseAddressofSector;

    if ((uint32)VirtualSectors < C40_IP_MAX_DATA_SECTOR)
    {
        /* This sector is Data zone: Block 4*/
        BaseAddressofSector = C40_IP_DATA_BASE_ADDRESS + ((uint32)VirtualSectors * C40_IP_SECTOR_SIZE);
    }
    else if ((uint32)VirtualSectors < C40_IP_MAX_VIRTUAL_SECTOR)
    {
        BaseAddressofSector = C40_IP_CODE_BASE_ADDRESS + (((uint32)VirtualSectors - C40_IP_MAX_DATA_SECTOR) * C40_IP_SECTOR_SIZE);
    }
    else if (C40_IP_MAX_VIRTUAL_SECTOR == (uint32)VirtualSectors)
    {
        BaseAddressofSector = C40_IP_UTEST_BASE_ADDRESS;
    }
    else
    {
        /* Configuration errors */
        BaseAddressofSector = C40_IP_INVALID_ADDR;
    }

    return BaseAddressofSector;
}

/**
 * Function Name    C40_Ip_GetCodeBlockNumber
 * Description      Get code block number from address.
 */
static C40_Ip_FlashBlocksNumberType C40_Ip_GetCodeBlockNumber(uint32 TargetAddress)
{
    C40_Ip_FlashBlocksNumberType BlockNumber;

    if (TargetAddress <= (uint32)C40_IP_CODE_BLOCK_0_END_ADDR)
    {
        /* The address is in the code block 0 */
        BlockNumber = C40_IP_CODE_BLOCK_0;
    }
#ifdef C40_IP_CODE_BLOCK_1_END_ADDR
    else if (TargetAddress <= (uint32)C40_IP_CODE_BLOCK_1_END_ADDR)
    {
        /* The address is in the code block 1 */
        BlockNumber = C40_IP_CODE_BLOCK_1;
    }
#endif
#ifdef C40_IP_CODE_BLOCK_2_END_ADDR
    else if (TargetAddress <= (uint32)C40_IP_CODE_BLOCK_2_END_ADDR)
    {
        /* The address is in the code block 2 */
        BlockNumber = C40_IP_CODE_BLOCK_2;
    }
#endif
#ifdef C40_IP_CODE_BLOCK_3_END_ADDR
    else if (TargetAddress <= (uint32)C40_IP_CODE_BLOCK_3_END_ADDR)
    {
        /* The address is in the code block 3 */
        BlockNumber = C40_IP_CODE_BLOCK_3;
    }
#endif
    else
    {
        BlockNumber = C40_IP_BLOCK_INVALID;
    }

    return BlockNumber;
}

/**
 * Function Name    C40_Ip_ReadData8
 * Description      Reads 1 byte from the specified address
 */
static inline uint8 C40_Ip_ReadData8(uint32 Address)
{
    uint8 Data;
    X86_Read(Address, &Data, 1);
    return Data;
}

/**
 * Function Name    C40_Ip_ReadData16
 * Description      Reads 2 bytes from the specified address
 */
static inline uint16 C40_Ip_ReadData16(uint32 Address)
{
    uint16 Data;
    X86_Read(Address, (uint8 *)&Data, 2);
    return Data;
}

/**
 * Function Name    C40_Ip_ReadData32
 * Description      Reads 4 bytes from the specified address
 */
static inline uint32 C40_Ip_ReadData32(uint32 Address)
{
    uint32 Data;
    X86_Read(Address, (uint8 *)&Data, 4);
    return Data;
}

/**
 * Function Name    C40_Ip_ReadData32
 * Description      Reads 4 bytes from the specified address
 */
static inline uint64 C40_Ip_ReadData64(uint32 Address)
{
    uint64 Data;
    X86_Read(Address, (uint8*)&Data, 8);
    return Data;
}

/**
 * Function Name    C40_Ip_ReadData
 * Description      Accesses the flash to read data to user buffer
 */
static uint32 C40_Ip_ReadData(uint32 ReadAddress,
                              uint8 *DesAddressPtr,
                              uint32 SizeLeft
                             )
{
    uint32 ReadSize;
    uint32 DesAddress = (uint32)DesAddressPtr;
    /* Combine two addresses for faster alignment checking */
    uint32 CombinedAddress = ReadAddress | DesAddress;

    /* Both the lowest three bits are zero: 8 bytes aligned */
    if ((0UL == (CombinedAddress & 0x07UL)) && (SizeLeft >= C40_IP_SIZE_8BYTE))
    {
        /* 4 bytes operation */
        ReadSize = C40_IP_SIZE_8BYTE;
        *((uint64*)DesAddress) = C40_Ip_ReadData64(ReadAddress);
    }
    /* Both the lowest two bits are zero: 4 bytes aligned */
    else if ( (0UL == (CombinedAddress & 0x03UL)) && (SizeLeft >= C40_IP_SIZE_4BYTE) )
    {
        /* 4 bytes operation */
        ReadSize = C40_IP_SIZE_4BYTE;
        *((uint32 *)DesAddress) = C40_Ip_ReadData32(ReadAddress);
    }
    /* Both the lowest one bit are zero: 2 bytes aligned */
    else if ( (0UL == (CombinedAddress & 0x01UL)) && (SizeLeft >= C40_IP_SIZE_2BYTE) )
    {
        /* 2 bytes operation */
        ReadSize = C40_IP_SIZE_2BYTE;
        *((uint16 *)DesAddress) = C40_Ip_ReadData16(ReadAddress);
    }
    else
    {
        /* 1 byte operation */
        ReadSize = C40_IP_SIZE_1BYTE;
        *DesAddressPtr = C40_Ip_ReadData8(ReadAddress);  /* Using uint8 directly to avoid pointer casting */
    }

    return ReadSize;
}

/**
 * Function Name    C40_Ip_ReadCheckInputParams
 * Description      Checks the input parameters for C40_Ip_Read
 */
static C40_Ip_StatusType C40_Ip_ReadCheckInputParams(uint32 Length,
                                                     const uint8 *DestAddressPtr
                                                    )
{
    C40_Ip_StatusType Status = C40_IP_STATUS_ERROR_INPUT_PARAM;

    /* Check 1: The user buffer pointer cannot be a null pointer */
    if (NULL_PTR == DestAddressPtr)
    {
        /* Wrong input parameters */
    }
    /* Check 2: The read length must be greater than zero */
    else if (0UL == Length)
    {
        /* Wrong input parameters */
    }
    else
    {
        /* Reaching here means that everything is ok */
        Status = C40_IP_STATUS_SUCCESS;
    }

    return Status;
}

/**
 * @brief       Check status after memory accessing of Read/Compare operations
 *
 * @return      the status of the most recent memory access
 * @retval      C40_IP_STATUS_ERROR     Hardware errors or ECC happened or there was a compare error
 * @retval      C40_IP_STATUS_SUCCESS   Everything was ok
 */
static C40_Ip_StatusType C40_Ip_CheckReadCompareStatus(uint32 ReadAddress,
                                                       boolean CompareResult
                                                      )
{
    C40_Ip_StatusType Status = C40_IP_STATUS_ERROR;

    /* Check everything in order of priority: hardware > ECC > DATA Syndrome > compare */

    /* Step 4: Check for compare error */
    if ((boolean)TRUE != CompareResult)
    {
        /* Compare error: update read status */
        C40_Ip_eReadStatus = C40_IP_STATUS_ERROR_PROGRAM_VERIFY;
    }
    else
    {
        /* Everything was ok */
        Status = C40_IP_STATUS_SUCCESS;
        C40_Ip_eReadStatus = C40_IP_STATUS_SUCCESS;
    }

    return Status;
}

/**
 * @brief   Verifies that an area in memory flash is in erased state
 */
static void C40_Ip_EraseVerify(uint32 Address,
                               uint32 Size
                              )
{
    uint32 ReadAddress = Address;
    uint32 SizeLeft = Size;
    uint32 ReadSize;
    C40_Ip_StatusType Status;
    boolean CompareResult;

    /* Start compare operation */
    do
    {
        /* Start flash access */
        C40_Ip_FlashAccessCalloutStart();

        /* Access the flash to compare data */
        ReadSize = C40_Ip_CompareBlank(ReadAddress, SizeLeft, &CompareResult);

        /* Finish flash access */
        C40_Ip_FlashAccessCalloutFinish();

        /* Check for hardware errors or ECC happend or compare error */
        Status = C40_Ip_CheckReadCompareStatus(ReadAddress, CompareResult);

        if (C40_IP_STATUS_SUCCESS != Status)
        {
            break;
        }

        /* Move to next data */
        ReadAddress += ReadSize;
        SizeLeft    -= ReadSize;
    }
    while (0UL < SizeLeft);
}

/**
 * @brief   Verifies data written in memory flash
 */
static void C40_Ip_ProgramVerify(uint32 Address,
                                 const uint8 *Data,
                                 uint32 Size
                                )
{
    uint32 ReadAddress = Address;
    uint32 DataAddress = (uint32)Data;
    uint32 SizeLeft = Size;
    uint32 ReadSize;
    C40_Ip_StatusType Status;
    boolean CompareResult;

    /* Start compare operation */
    do
    {
        /* Start flash access */
        C40_Ip_FlashAccessCalloutStart();

        /* Access the flash to compare data */
        ReadSize = C40_Ip_CompareData(ReadAddress, DataAddress, SizeLeft, &CompareResult);

        /* Finish flash access */
        C40_Ip_FlashAccessCalloutFinish();

        /* Check for hardware errors or ECC happend or compare error */
        Status = C40_Ip_CheckReadCompareStatus(ReadAddress, CompareResult);

        if (C40_IP_STATUS_SUCCESS != Status)
        {
            break;
        }

        /* Move to next data */
        ReadAddress += ReadSize;
        DataAddress += ReadSize;
        SizeLeft    -= ReadSize;
    }
    while (0UL < SizeLeft);
}


/**
 * @brief   Verifies that an area in memory flash is in erased state
 */
static uint32 C40_Ip_CompareBlank(uint32 ReadAddress,
                                  uint32 SizeLeft,
                                  boolean *CompareResult
                                 )
{
    uint32 ReadSize;

    /* The lowest three bits are zero: 8 bytes aligned */
    if ((0UL == (ReadAddress & 0x07UL)) && (SizeLeft >= C40_IP_SIZE_8BYTE))
    {
        /* 4 bytes operation */
        ReadSize = C40_IP_SIZE_8BYTE;
        *CompareResult = (0xFFFFFFFFFFFFFFFFUL == C40_Ip_ReadData64(ReadAddress));
    }
    /* The lowest two bits are zero: 4 bytes aligned */
    else if ( (0UL == (ReadAddress & 0x03UL)) && (SizeLeft >= C40_IP_SIZE_4BYTE) )
    {
        /* 4 bytes operation */
        ReadSize = C40_IP_SIZE_4BYTE;
        *CompareResult = ( C40_IP_ERASED_VALUE_32 == C40_Ip_ReadData32(ReadAddress) );
    }
    /* The lowest one bit are zero: 2 bytes aligned */
    else if ( (0UL == (ReadAddress & 0x01UL)) && (SizeLeft >= C40_IP_SIZE_2BYTE) )
    {
        /* 2 bytes operation */
        ReadSize = C40_IP_SIZE_2BYTE;
        *CompareResult = ( C40_IP_ERASED_VALUE_16 == C40_Ip_ReadData16(ReadAddress) );
    }
    else
    {
        /* 1 byte operation */
        ReadSize = C40_IP_SIZE_1BYTE;
        *CompareResult = ( C40_IP_ERASED_VALUE_8 == C40_Ip_ReadData8(ReadAddress) );
    }

    return ReadSize;
}


/**
 * @brief   Verifies data written in memory flash
 */
static uint32 C40_Ip_CompareData(uint32 ReadAddress,
                                 uint32 DataAddress,
                                 uint32 SizeLeft,
                                 boolean *CompareResult
                                )
{
    uint32 ReadSize;

    /* Combine two addresses for faster alignment checking */
    uint32 CombinedAddress = ReadAddress | DataAddress;

    /* Both the lowest three bits are zero: 8 bytes aligned */
    if ((0UL == (CombinedAddress & 0x07UL)) && (SizeLeft >= C40_IP_SIZE_8BYTE))
    {
        /* 8 bytes operation */
        ReadSize = C40_IP_SIZE_8BYTE;
        *CompareResult = (C40_Ip_ReadData64(ReadAddress) == C40_Ip_ReadData64(DataAddress));
    }
    /* Both the lowest two bits are zero: 4 bytes aligned */
    else if ( (0UL == (CombinedAddress & 0x03UL)) && (SizeLeft >= C40_IP_SIZE_4BYTE) )
    {
        /* 4 bytes operation */
        ReadSize = C40_IP_SIZE_4BYTE;
        *CompareResult = ( C40_Ip_ReadData32(ReadAddress) == C40_Ip_ReadData32(DataAddress) );
    }
    /* Both the lowest one bit are zero: 2 bytes aligned */
    else if ( (0UL == (CombinedAddress & 0x01UL)) && (SizeLeft >= C40_IP_SIZE_2BYTE) )
    {
        /* 2 bytes operation */
        ReadSize = C40_IP_SIZE_2BYTE;
        *CompareResult = ( C40_Ip_ReadData16(ReadAddress) == C40_Ip_ReadData16(DataAddress) );
    }
    else
    {
        /* 1 byte operation */
        ReadSize = C40_IP_SIZE_1BYTE;
        *CompareResult = ( C40_Ip_ReadData8(ReadAddress) == C40_Ip_ReadData8(DataAddress) );
    }

    return ReadSize;
}


#if (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED)

/**
 * Function Name    C40_Ip_MainInterfaceSectorErasePreCheck
 * Description      Verify the parameters, EHV, UTest and the selected sector are ready to perform the erase job
 */
static inline C40_Ip_StatusType C40_Ip_MainInterfaceSectorErasePreCheck(C40_Ip_VirtualSectorsType VirtualSector)
{
    C40_Ip_StatusType ReturnCode;

    /* Check length and u32offet should align with C40_IP_SECTOR_SIZE */
    if (VirtualSector > C40_UTEST_ARRAY_0_S000)
    {
        /* Wrong input parameters*/
        ReturnCode = C40_IP_STATUS_ERROR_INPUT_PARAM;
    }
    else
    {
        /* Reaching here means that everything is ok */
        ReturnCode = C40_IP_STATUS_SUCCESS;
    }

    return ReturnCode;
}

/**
 * Function Name    C40_Ip_MainInterfaceWritePreCheck
 * Description      Verify the parameters, EHV, UTest and the selected sector are ready to perform the write job
 */
static inline C40_Ip_StatusType C40_Ip_MainInterfaceWritePreCheck(uint32 LogicalAddress,
                                                                  uint32 Length,
                                                                  const uint8 *SourceAddressPtr
                                                                 )
{
    C40_Ip_StatusType ReturnCode;
    C40_Ip_VirtualSectorsType VirtualSector;
    uint32 Offset;

    C40_IP_DEV_ASSERT( C40_Ip_ValidRangeAddress(LogicalAddress, Length) );

    /* Get sector number */
    VirtualSector = C40_Ip_GetSectorNumberFromAddress(LogicalAddress);

    /* Byte offset of a quad-page */
    Offset = LogicalAddress & (C40_IP_WRITE_MAX_SIZE - 1U);

    /* Validates input parameters */
    if ( ((LogicalAddress   & (C40_IP_WRITE_DOUBLE_WORD - 1U)) != 0U ) ||    /* Must be aligned with 8-byte     */
         ((Length           & (C40_IP_WRITE_DOUBLE_WORD - 1U)) != 0U ) ||    /* Must be aligned with 8-byte     */
         ((Length + Offset) > C40_IP_WRITE_MAX_SIZE)                   ||    /* Must fall within a quad-page    */
         (0U == Length)                                                ||    /* Must not be zero                */
         (NULL_PTR == SourceAddressPtr)                                      /* Must not be NULL_PTR            */
       )
    {
        /* Wrong input parameters*/
        ReturnCode = C40_IP_STATUS_ERROR_INPUT_PARAM;
    }
    else
    {
        /* Reaching here means that everything is ok */
        ReturnCode = C40_IP_STATUS_SUCCESS;
    }

    return ReturnCode;
}

#endif /* (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief   Set synch/Asynch at IP layer base on the bAynch of HLD
 */
void C40_Ip_SetAsyncMode(const boolean Async)
{
    C40_Ip_bAsync = Async;
}

/**
 * Function Name    C40_Ip_GetSectorNumberFromAddress
 * Description      Get Sector number of sector from address.
 */
C40_Ip_VirtualSectorsType C40_Ip_GetSectorNumberFromAddress(uint32 TargetAddress)
{
    C40_Ip_VirtualSectorsType VirtualSectors;

    C40_IP_DEV_ASSERT( C40_Ip_ValidAddress(TargetAddress) );

    if      ((TargetAddress >= (uint32)C40_IP_UTEST_BLOCK_BASE_ADDR)  && (TargetAddress <= (uint32)C40_IP_UTEST_BLOCK_END_ADDR))
    {
        /* The address is from the Utest sector */
        VirtualSectors = C40_UTEST_ARRAY_0_S000;
    }
    else if ((TargetAddress >= (uint32)C40_IP_DATA_BLOCK_BASE_ADDR)   && (TargetAddress <= (uint32)C40_IP_DATA_BLOCK_END_ADDR))
    {
        /* The address is from the data sectors */
        VirtualSectors = (C40_Ip_VirtualSectorsType)(((uint32)TargetAddress - (uint32)C40_IP_DATA_BLOCK_BASE_ADDR) / C40_IP_SECTOR_SIZE);
    }
    else if ((TargetAddress >= (uint32)C40_IP_CODE_BLOCK_0_BASE_ADDR) && (TargetAddress <= (uint32)C40_IP_CODE_BLOCK_END_ADDR))
    {
        /* The address is from the code sectors */
        VirtualSectors = (C40_Ip_VirtualSectorsType)((uint32)C40_IP_MAX_DATA_SECTOR + (((uint32)TargetAddress - (uint32)C40_IP_CODE_BLOCK_0_BASE_ADDR) / C40_IP_SECTOR_SIZE));
    }
    else
    {
        /* Out of bounds address */
        VirtualSectors = C40_IP_SECTOR_ERROR;
    }

    return VirtualSectors;
}


/**
 * Function Name    C40_Ip_GetBlockNumberFromAddress
 * Description      Get block number (block type) from address.
 */
C40_Ip_FlashBlocksNumberType C40_Ip_GetBlockNumberFromAddress(uint32 TargetAddress)
{
    C40_Ip_FlashBlocksNumberType BlockNumber;

    if      ((TargetAddress >= (uint32)C40_IP_UTEST_BLOCK_BASE_ADDR)  && (TargetAddress <= (uint32)C40_IP_UTEST_BLOCK_END_ADDR))
    {
        /* The address is in the Utest block */
        BlockNumber = C40_IP_BLOCK_UTEST;
    }
    else if ((TargetAddress >= (uint32)C40_IP_DATA_BLOCK_BASE_ADDR)   && (TargetAddress <= (uint32)C40_IP_DATA_BLOCK_END_ADDR))
    {
        /* The address is in the data block */
        BlockNumber = C40_IP_DATA_BLOCK;
    }
    else if ((TargetAddress >= (uint32)C40_IP_CODE_BLOCK_0_BASE_ADDR) && (TargetAddress <= (uint32)C40_IP_CODE_BLOCK_END_ADDR))
    {
        /* The address is in the code block */
        BlockNumber = C40_Ip_GetCodeBlockNumber(TargetAddress);
    }
    else
    {
        /* Out of bounds address */
        BlockNumber = C40_IP_BLOCK_INVALID;
    }

    return BlockNumber;
}

/**
 * Function Name    C40_Ip_Init
 * Description      This function will initialize c40 module and clear all error flags.
 *
 * @implements      C40_Ip_Init_Activity
 */
C40_Ip_StatusType C40_Ip_Init(const C40_Ip_ConfigType * InitConfig)
{
    C40_Ip_StatusType ReturnCode;

    C40_IP_DEV_ASSERT(InitConfig != NULL_PTR );

#if (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED)
    /** Init with Main interface **/
    ReturnCode = C40_IP_STATUS_SUCCESS;
#else
    ReturnCode = C40_IP_STATUS_ERROR;
#endif

    C40_Ip_pConfigPtr = InitConfig;
    X86_Init();
    return ReturnCode;
}

#if (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED)

/**
 * Function Name    C40_Ip_MainInterfaceSectorErase
 * Description      Accepts an erase job over one of the sectors through the main interface if possible
 *
 * @implements      C40_Ip_MainInterfaceSectorErase_Activity
 */
C40_Ip_StatusType C40_Ip_MainInterfaceSectorErase(C40_Ip_VirtualSectorsType VirtualSector,
                                                  uint8 DomainIdValue
                                                 )
{
    C40_Ip_StatusType ReturnCode;
    uint32 LogicalAddress;

    C40_IP_DEV_ASSERT((uint32)VirtualSector <= C40_IP_MAX_VIRTUAL_SECTOR);

    /* Checking before start a new erase operation */
    ReturnCode = C40_Ip_MainInterfaceSectorErasePreCheck(VirtualSector);

    if (C40_IP_STATUS_SUCCESS == ReturnCode)
    {
        /* Address of the sector to be erased */
        LogicalAddress = C40_Ip_GetBaseAddressOfSector(VirtualSector);

        X86_Erase(LogicalAddress, C40_IP_SECTOR_SIZE);

        /* if Async is true */
        if (TRUE == C40_Ip_bAsync)
        {
            /* Start flash access */
            C40_Ip_FlashAccessCalloutStart();
        }
    }

    return ReturnCode;
}

/**
 * Function Name    C40_Ip_MainInterfaceWrite
 * Description      Writes data into the memory array using the main interface. Initiates the hardware write and then exits.
 *
 * @implements      C40_Ip_MainInterfaceWrite_Activity
 */
C40_Ip_StatusType C40_Ip_MainInterfaceWrite(uint32 LogicalAddress,
                                            uint32 Length,
                                            const uint8 *SourceAddressPtr,
                                            uint8 DomainIdValue
                                           )
{
    C40_Ip_StatusType ReturnCode;

    C40_IP_DEV_ASSERT( C40_Ip_ValidRangeAddress(LogicalAddress, Length) );
    /* Store address to check failed operation */
    C40_Ip_u32LogicalAddressCheckFail = LogicalAddress % C40_IP_WRITE_MAX_SIZE;

    /* Checking before a new write operation */
    ReturnCode = C40_Ip_MainInterfaceWritePreCheck(LogicalAddress, Length, SourceAddressPtr);

    if ((C40_IP_STATUS_SUCCESS == ReturnCode) || (C40_IP_STATUS_ECC_CORRECTED == ReturnCode))
    {
        X86_Write(LogicalAddress, SourceAddressPtr, Length);

        /* if Async is true */
        if (TRUE == C40_Ip_bAsync)
        {
            /* Start flash access */
            C40_Ip_FlashAccessCalloutStart();
        }
    }

    return ReturnCode;
}

#endif /* (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED) */


/**
 * Function Name    C40_Ip_Read
 * Description      This function fills data to DestAddressPtr with data from the specified address
 *
 * @implements      C40_Ip_Read_Activity
 */
C40_Ip_StatusType C40_Ip_Read(uint32 LogicalAddress,
                              uint32 Length,
                              uint8 *DestAddressPtr
                             )
{
    uint32            ReadAddress   = LogicalAddress;
    uint8            *DesAddressPtr = DestAddressPtr;
    uint32            SizeLeft      = Length;
    uint32            ReadSize;
    C40_Ip_StatusType Status;

    C40_IP_DEV_ASSERT(Length > 0UL);
    C40_IP_DEV_ASSERT(DestAddressPtr != NULL_PTR);
    C40_IP_DEV_ASSERT( C40_Ip_ValidRangeAddress(LogicalAddress, Length) );

    /* Checking before reading */
    C40_Ip_eReadStatus = C40_Ip_ReadCheckInputParams(Length, DestAddressPtr);

    /* Everything is ready for a new read operation */
    if (C40_IP_STATUS_SUCCESS == C40_Ip_eReadStatus)
    {
        /* Change to busy state */
        C40_Ip_eReadStatus = C40_IP_STATUS_BUSY;

        /* Start read operation */
        do
        {
            /* Start flash access */
            C40_Ip_FlashAccessCalloutStart();

            /* Access the flash to read data to user buffer */
            ReadSize = C40_Ip_ReadData(ReadAddress, DesAddressPtr, SizeLeft);

            /* Finish flash access */
            C40_Ip_FlashAccessCalloutFinish();

            /* Check for hardware errors or ECC happened */
            Status = C40_Ip_CheckReadCompareStatus(ReadAddress, TRUE);

            if (C40_IP_STATUS_SUCCESS != Status)
            {
                break;
            }

            /* Move to the next data */
            ReadAddress  += ReadSize;
            DesAddressPtr = &DesAddressPtr[ReadSize];
            SizeLeft     -= ReadSize;
        }
        while (0UL < SizeLeft);
    }

    return C40_Ip_eReadStatus;
}


/**
 * Function Name    C40_Ip_Compare
 * Description      Checks that there is the desired data at the specified address
 *
 * @implements      C40_Ip_Compare_Activity
 */
C40_Ip_StatusType C40_Ip_Compare(uint32 LogicalAddress,
                                 uint32 Length,
                                 const uint8 *SourceAddressPtr
                                )
{
    C40_IP_DEV_ASSERT(Length > 0UL);
    C40_IP_DEV_ASSERT( C40_Ip_ValidRangeAddress(LogicalAddress, Length) );

    /* Check the input parameter */
    if (0U == Length)
    {
        /* Wrong input parameter */
        C40_Ip_eReadStatus = C40_IP_STATUS_ERROR_INPUT_PARAM;
    }
    else
    {
        /* Change to busy state */
        C40_Ip_eReadStatus = C40_IP_STATUS_BUSY;

        /* Choose the type of comparison */
        if (NULL_PTR != SourceAddressPtr)
        {
            /* Verify the written data */
            C40_Ip_ProgramVerify(LogicalAddress, SourceAddressPtr, Length);
        }
        else
        {
            /* Blank check */
            C40_Ip_EraseVerify(LogicalAddress, Length);
        }
    }

    return C40_Ip_eReadStatus;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "MemAcc_Cfg.h"

typedef struct {
    uint8_t *pBuff;
    uint32_t StartAddr;
    uint32_t Length;
} BlockEntry;

static uint32_t g_BlockEntryCount = 0;
static BlockEntry *g_BlockEntries = NULL;

static boolean X86_Init(void) {

    printf("X86_Init Called\n");

    g_BlockEntryCount = 0;

    for (uint32_t AreaIndex = 0; AreaIndex < MemAcc_Config.AddressAreaCount; AreaIndex++) {
        g_BlockEntryCount += MemAcc_Config.AddressAreas[AreaIndex].SubAreaCount;
    }

    g_BlockEntries = (BlockEntry *)malloc(sizeof(BlockEntry) * g_BlockEntryCount);
    if (g_BlockEntries) {
        memset(g_BlockEntries, 0, sizeof(BlockEntry) * g_BlockEntryCount);

        int BlockIndex = 0;

        for (uint32_t AreaIndex = 0; AreaIndex < MemAcc_Config.AddressAreaCount; AreaIndex++) {
            for (int SubAreaIndex = 0; SubAreaIndex < MemAcc_Config.AddressAreas[AreaIndex].SubAreaCount; SubAreaIndex++) {
                const MemAcc_SubAddressAreaType* SubArea = &MemAcc_Config.AddressAreas[AreaIndex].SubAreas[SubAreaIndex];
                g_BlockEntries[BlockIndex].StartAddr = SubArea->PhysicalStartAddress;
                g_BlockEntries[BlockIndex].Length = SubArea->Length;
                uint8_t* pBuff = (uint8_t*)malloc(SubArea->Length);
                if (pBuff) {
                    memset(pBuff, 0xFF, SubArea->Length);
                    char Filename[20];
                    sprintf_s(& Filename[0], 20, "%08X.bin", SubArea->PhysicalStartAddress);
                    FILE* pFile = fopen(Filename, "rb");
                    if (pFile != NULL) {
                        fread(pBuff, 1, SubArea->Length, pFile);
                        fclose(pFile);
                    }
                }
                g_BlockEntries[BlockIndex].pBuff = pBuff;
				++BlockIndex;
            }
        }
    }

    return TRUE;
}

static boolean X86_Read(uint32 Address, uint8 *Data, uint32 Size) {
    printf("X86_Read Called %08X %08X %d\n", Address, (uint32_t)Data, Size);

    if (g_BlockEntries) {
        for (uint32_t BlockIndex = 0; BlockIndex < g_BlockEntryCount; BlockIndex++) {
            if (Address >= g_BlockEntries[BlockIndex].StartAddr && Address < g_BlockEntries[BlockIndex].StartAddr + g_BlockEntries[BlockIndex].Length) {
                memcpy(Data, g_BlockEntries[BlockIndex].pBuff + (Address - g_BlockEntries[BlockIndex].StartAddr), Size);
                break;
            }
        }

        return TRUE;
    }
    else {
        return FALSE;
    }
}

static boolean X86_Write(uint32 Address, const uint8 *Data, uint32 Size) {
    printf("X86_Write Called %08X %08X %d\n", Address, (uint32_t)Data, Size);

	if (g_BlockEntries) {
        for (uint32_t BlockIndex = 0; BlockIndex < g_BlockEntryCount; BlockIndex++) {
            if (Address >= g_BlockEntries[BlockIndex].StartAddr && Address < g_BlockEntries[BlockIndex].StartAddr + g_BlockEntries[BlockIndex].Length) {
                uint8_t* pStartPos = g_BlockEntries[BlockIndex].pBuff + (Address - g_BlockEntries[BlockIndex].StartAddr);
				for (uint32_t index = 0; index < Size; index++) {
					if (pStartPos[index] != 0xFF) {
                        pStartPos = 0;
						pStartPos[1] = 0; // Raise an exception for debug
                        for (;;);
					}
				}
                memcpy(pStartPos, Data, Size);
                break;
            }
        }
        return TRUE;
    }
    else {
        return FALSE;
    }
}

static boolean X86_Erase(uint32 Address, uint32 Size) {
    printf("X86_Erase Called %08X %d\n", Address, Size);

    if (g_BlockEntries) {
        for (uint32_t BlockIndex = 0; BlockIndex < g_BlockEntryCount; BlockIndex++) {
            if (Address >= g_BlockEntries[BlockIndex].StartAddr && Address < g_BlockEntries[BlockIndex].StartAddr + g_BlockEntries[BlockIndex].Length) {
                memset(g_BlockEntries[BlockIndex].pBuff + (Address - g_BlockEntries[BlockIndex].StartAddr), 0xFF, Size);
                break;
            }
        }

        return TRUE;
    }
    else {
        return FALSE;
    }

}

void X86_Unload(void) {
    if (g_BlockEntries) {
        for (uint32_t BlockIndex = 0; BlockIndex < g_BlockEntryCount; BlockIndex++) {
            if (g_BlockEntries[BlockIndex].pBuff != NULL) {

                char Filename[20];
                sprintf_s(&Filename[0], 20, "%08X.bin", g_BlockEntries[BlockIndex].StartAddr);
                FILE* pFile = fopen(Filename, "wb+");
                if (pFile != NULL) {
                    fwrite(g_BlockEntries[BlockIndex].pBuff, 1, g_BlockEntries[BlockIndex].Length, pFile);
                    fclose(pFile);
                }

                free(g_BlockEntries[BlockIndex].pBuff);
                g_BlockEntries[BlockIndex].pBuff = NULL;
            }
        }
        free(g_BlockEntries);
        g_BlockEntries = NULL;
    }
}


#ifdef __cplusplus
}
#endif

/** @} */
