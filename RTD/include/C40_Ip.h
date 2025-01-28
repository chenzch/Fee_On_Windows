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

#ifndef C40_IP_H
#define C40_IP_H

/**
 * @file       C40_Ip.h
 *
 * @defgroup   C40_IP C40 IP Driver
 * implement   C40_Ip.h_Artifact
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
#include "Mcal.h"
#include "C40_Ip_Cfg.h"

#define C40_Ip_AccessCode(X) do { if (X) { (X)(); } } while (0)

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define C40_IP_VENDOR_ID_H                       43
#define C40_IP_AR_RELEASE_MAJOR_VERSION_H        4
#define C40_IP_AR_RELEASE_MINOR_VERSION_H        7
#define C40_IP_AR_RELEASE_REVISION_VERSION_H     0
#define C40_IP_SW_MAJOR_VERSION_H                4
#define C40_IP_SW_MINOR_VERSION_H                0
#define C40_IP_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal.h header file are of the same Autosar version */
    #if ((C40_IP_AR_RELEASE_MAJOR_VERSION_H != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (C40_IP_AR_RELEASE_MINOR_VERSION_H != MCAL_AR_RELEASE_MINOR_VERSION) \
        )
        #error "AutoSar Version Numbers of C40_Ip.h and Mcal.h are different"
    #endif
#endif

/* Check if current file and C40_Ip_Cfg header file are of the same vendor */
#if (C40_IP_VENDOR_ID_H != C40_IP_VENDOR_ID_CFG)
    #error "C40_Ip.h and C40_Ip_Cfg.h have different vendor ids"
#endif
/* Check if current file and C40_Ip_Cfg header file are of the same Autosar version */
#if ((C40_IP_AR_RELEASE_MAJOR_VERSION_H    != C40_IP_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (C40_IP_AR_RELEASE_MINOR_VERSION_H    != C40_IP_AR_RELEASE_MINOR_VERSION_CFG) || \
     (C40_IP_AR_RELEASE_REVISION_VERSION_H != C40_IP_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of C40_Ip.h and C40_Ip_Cfg.h are different"
#endif
/* Check if current file and C40_Ip_Cfg header file are of the same Software version */
#if ((C40_IP_SW_MAJOR_VERSION_H != C40_IP_SW_MAJOR_VERSION_CFG) || \
     (C40_IP_SW_MINOR_VERSION_H != C40_IP_SW_MINOR_VERSION_CFG) || \
     (C40_IP_SW_PATCH_VERSION_H != C40_IP_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of C40_Ip.h and C40_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define MEM_43_INFLS_START_SEC_CODE
#include "Mem_43_INFLS_MemMap.h"

/**
 * @brief    Set synch/Asynch at IP layer base on the bAsynch of HLD
 *
 * @details  This function will change C55_Ip_bAsync value at IP layer. Its param base on the bAsynch of HLD.
 *           Thanks for this param, writing and erasing will operate at synch or Asynch mode.
 *
 * @pre     The module has to be initialized
 *
 */
void C40_Ip_SetAsyncMode(const boolean Async);

#if (STD_ON == C40_IP_SECTOR_SET_LOCK_API)
/**
 * @brief        Locks the selected sector
 *
 * @details      Locks the selected sector for the requesting core if possible.
 *               This function shall cover all the address spaces available.
 *
 * @param[in]    VirtualSector     Sector to be locked.
 * @param[in]    DomainIdValue     ID for the core that requests sector lock.
 *
 * @return       C40_Ip_StatusType
 * @retval       C40_IP_STATUS_SUCCESS  Sector was locked successfully
 * @retval       C40_IP_STATUS_ERROR    The requested sector was locked by another core
 *
 * @pre          The module has to be initialized and not busy.
 *
 */
#define C40_Ip_SetLock(A, B) C40_IP_STATUS_SUCCESS

#endif /* STD_ON == C40_IP_SECTOR_SET_LOCK_API */

#define C40_Ip_ClearLock(A, B) C40_IP_STATUS_SUCCESS

/**
 * @brief        Get sector number from specified address.
 *
 * @details      Get sector number from specified address.
 *
 * @param[in]    TargetAddress   target address
 *
 * @return       C40_Ip_VirtualSectorsType
 * @retval       Address of sector
 *
 * @pre          The module has to be initialized and not busy.
 *
 */
C40_Ip_VirtualSectorsType C40_Ip_GetSectorNumberFromAddress(uint32 TargetAddress);

/**
 * @brief        Get block number from target address
 *
 * @details      Get block number from target address
 *
 * @param[in]    TargetAddress   target address
 *
 * @return       C40_Ip_GetBlockNumberFromAddress
 * @retval       The block number which contains the target address.
 *
 */
C40_Ip_FlashBlocksNumberType C40_Ip_GetBlockNumberFromAddress(uint32 TargetAddress);

/**
 * @brief        Initializes the C40 module
 *
 * @details      This function will initialize c40 module and clear all error flags.
 *
 * @param[in]    InitConfig   Pointer to the driver configuration structure.
 * @return       C40_Ip_StatusType
 * @retval       C40_IP_STATUS_SUCCESS          Initialization is success
 * @retval       C40_IP_STATUS_ERROR_TIMEOUT    Errors Timeout because wait for the Done bit long time
 *
 */
C40_Ip_StatusType C40_Ip_Init(const C40_Ip_ConfigType * InitConfig);

#if (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED)
#define C40_Ip_Abort() C40_IP_STATUS_SUCCESS
#else
#define C40_Ip_Abort() C40_IP_STATUS_ERROR
#endif

/**
 * @brief        This function fills data to DestAddressPtr
 *
 * @details      This function fills data to DestAddressPtr with data from the specified address
 *
 * @param[in]    LogicalAddress   The start address of the area to be read.
 * @param[in]    Length           Read size
 * @param[in]    DestAddressPtr   Pointer to the destination of the read.
 *
 * @return       C40_Ip_StatusType
 * @retval       C40_IP_STATUS_SUCCESS             Read performed successfully.
 * @retval       C40_IP_STATUS_ERROR_INPUT_PARAM   Input parameters are invalid.
 * @retval       C40_IP_STATUS_ERROR               There was an error while reading.
 *
 * @pre          The module has to be initialized and not busy.
 *
 */
C40_Ip_StatusType C40_Ip_Read(uint32 LogicalAddress,
                              uint32 Length,
                              uint8 *DestAddressPtr
                             );

/**
 * @brief        Checks that there is the desired data at the specified address
 *
 * @details      Checks that there is the desired data at the specified address.
 *               If the compare is intended to be a blank check, the SourceAddressPtr should be NULL.
 *
 * @param[in]    LogicalAddress     The start address of the area to be checked.
 * @param[in]    Length             Check size
 * @param[in]    SourceAddressPtr   Pointer to the data expected to be read.
 *
 * @return       C40_Ip_StatusType
 * @retval       C40_IP_STATUS_SUCCESS               Read performed successfully.
 * @retval       C40_IP_STATUS_ERROR_INPUT_PARAM     Input parameters are invalid.
 * @retval       C40_IP_STATUS_ERROR                 There was an error while reading.
 * @retval       C40_IP_STATUS_ERROR_PROGRAM_VERIFY  The expected data was not found completely at the specified address
 *
 * @pre          The module has to be initialized and not busy.
 *
 */
C40_Ip_StatusType C40_Ip_Compare(uint32 LogicalAddress,
                                 uint32 Length,
                                 const uint8 *SourceAddressPtr
                                );


#if (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED)
/**
 * @brief         Accepts an erase job over one of the sectors through the main interface if possible
 *
 * @details       Accepts an erase job over one of the sectors through the main interface if possible.
 *                Starts the high voltage erase and then exits. The status of the hardware erase must
 *                be verified by calling asynchronously the C40_Ip_MainInterfaceSectorEraseStatus function.
 *                The C40_Ip_MainInterfaceSectorErase function shall cover all the available sectors.
 *
 * @param[in]    VirtualSector     Sector to be erased.
 * @param[in]    DomainIdValue     ID for the core that requests sector lock
 *
 * @return       C40_Ip_StatusType
 * @retval       C40_IP_STATUS_SUCCESS             Hardware erase started successfully
 * @retval       C40_IP_STATUS_ERROR_INPUT_PARAM   The selected sector is out of bound
 * @retval       C40_IP_STATUS_ERROR               There is another job configured or in progress or
 *                                                 @p The sector is locked by another core or couldn't be unlocked.
 * @retval       C40_IP_STATUS_ERROR_TIMEOUT       The erase operation exceeded the timeout - Status value available only if the timeout feature is enabled
 *
 * @pre          The module has to be initialized.
 *
 */
C40_Ip_StatusType C40_Ip_MainInterfaceSectorErase(C40_Ip_VirtualSectorsType VirtualSector,
                                                  uint8 DomainIdValue
                                                 );

/**
 * @brief         Checks the status of the hardware erase started by the C40_Ip_MainInterfaceSectorErase function.
 *
 * @details       Checks the status of the hardware erase started by the C40_Ip_MainInterfaceSectorErase function.
 *
 * @return       C40_Ip_StatusType
 * @retval       C40_IP_STATUS_SUCCESS             Erase performed successfully
 * @retval       C40_IP_STATUS_BUSY                Hardware erase is still in progress
 * @retval       C40_IP_STATUS_ERROR               There was an error during the hardware erase.
 * @retval       C40_IP_STATUS_ERROR_TIMEOUT       The erase operation exceeded the timeout - Status value available only if the timeout feature is enabled.
 * @retval       C40_IP_STATUS_ERROR_BLANK_CHECK   The sector was not erased correctly - Status value available only if the blank check feature is enabled
 *
 * @pre          The module has to be initialized.
 *
 */
#define C40_Ip_MainInterfaceSectorEraseStatus() C40_IP_STATUS_SUCCESS

/**
 * @brief        Writes data into the memory array using the main interface. Initiates the hardware write and then exits.
 *
 * @details      Writes data into the memory array using the main interface. Initiates the hardware write and then exits.
 *               The status of the hardware write must be verified by calling asynchronously the C40_Ip_MainInterfaceWriteStatus function.
 *               Up to 128 bytes can be programmed at one on a quad-page boundary.
 *               All data bytes must fall within the same quad-page. If the data crosses the quad-page boundary, the error C40_IP_STATUS_ERROR_INPUT_PARAM will be returned.
 *               Please refer to the section Program in C40 chapter in the reference manual for more information.
 *
 * @param[in]    LogicalAddress     The start address of the write, must be aligned with 8 bytes.
 * @param[in]    Length             Size in bytes of the flash region to be programed, must be aligned with 8 bytes and the maximum value is 128 bytes.
 * @param[in]    SourceAddressPtr   Source program buffer address.
 * @param[in]    DomainIdValue      ID for the core that requests sector lock.
 *
 * @return       C40_Ip_StatusType
 * @retval       C40_IP_STATUS_SUCCESS             Program performed successfully
 * @retval       C40_IP_STATUS_ERROR_INPUT_PARAM   The input parameters are invalid.
 * @retval       C40_IP_STATUS_ERROR               There is another job configured or in progress or
 *                                                 @p The sector is locked by another core or couldn't be unlocked.
 * @retval       C40_IP_STATUS_ERROR_TIMEOUT       The write operation exceeded the timeout - Status value available only if the timeout feature is enabled
 * @retval       C40_IP_STATUS_ERROR_BLANK_CHECK   The sector has not been completely erased, its contents are not in erased state (available only if the erase verification feature is enabled)
 *
 * @pre          The module has to be initialized.
 *
 */
C40_Ip_StatusType C40_Ip_MainInterfaceWrite(uint32 LogicalAddress,
                                            uint32 Length,
                                            const uint8 *SourceAddressPtr,
                                            uint8 DomainIdValue
                                           );

#define C40_Ip_MainInterfaceWriteStatus() C40_IP_STATUS_SUCCESS
#endif /* (STD_ON == C40_IP_MAIN_INTERFACE_ENABLED) */

#define C40_Ip_ReportEccUnCorrectedError() 0

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* C40_IP_H */
