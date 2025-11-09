/*
*   (c) Copyright 2022 NXP
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be used strictly
*   in accordance with the applicable license terms.  By expressly accepting
*   such terms or by downloading, installing, activating and/or otherwise using
*   the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms.  If you do not agree to
*   be bound by the applicable license terms, then you may not retain,
*   install, activate or otherwise use the software.
*
*   This file contains sample code only. It is not part of the production code deliverables.
*/

#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include <SchM_MemAcc.h>
#include <SchM_Fee.h>
#include "Fee.h"
#include "Mem_43_INFLS.h"
#include <stdio.h>
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
uint8 DataBlock0[32];

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
uint8 DataReceive[32];

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Implement a simple assert macro
 *
 * @param  Condition
 * @return void
 */
void Fee_ExampleAssert(boolean Condition)
{
    while (!Condition)
    {
        /* Loop forever */
    }
}

static void Fee_Wait(void) {
    MemIf_StatusType status;
    do
    {
        Fee_MainFunction();
        MemAcc_MainFunction();
        status = Fee_GetStatus();
    } while (status != MEMIF_IDLE);
}

static void Test_FillData(uint8_t Pattern) {
    uint32_t index;
    for (index = 0; index < 16; ++index) {
		DataBlock0[index] = Pattern << 4 | index;
        DataBlock0[31 - index] = Pattern << 4 | index;
    }
}

static void Test_DumpData(void) {
    uint32_t index;
    for (index = 0; index < 32; ++index) {
		printf("%02X ", DataReceive[index]);
        if (index == 15) {
            printf("\n");
		}
	}
    printf("\n");
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
extern void X86_Unload(void);
extern const MemAcc_ConfigType MemAcc_Config;
/**
* @brief        Main function of the example
* @details      Initializez the used drivers and uses the Gpt
*               and Dio drivers to toggle a LED periodically
*/
int main(void)
{
    MemIf_StatusType status = MEMIF_IDLE;
    Std_ReturnType RetValue = E_NOT_OK;

    Mem_43_INFLS_Init(NULL_PTR);

    /* Init MemAcc */
    MemAcc_Init(&MemAcc_Config);

    /* Init Fee */
    Fee_Init(NULL_PTR);
    Fee_Wait();

    Test_FillData(0);
    Fee_Write(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, DataBlock0);
    Fee_Wait();
    Fee_Read(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, 0, DataReceive, 32);
    Fee_Wait();
    Test_DumpData();

    Test_FillData(1);
    Fee_Write(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1, DataBlock0);
    Fee_Wait();
    Fee_Read(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1, 0, DataReceive, 32);
    Fee_Wait();
    Test_DumpData();

    Test_FillData(2);
    Fee_Write(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, DataBlock0);
    Fee_Wait();
    Fee_Read(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, 0, DataReceive, 32);
    Fee_Wait();
    Test_DumpData();

    Test_FillData(3);
    Fee_Write(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1, DataBlock0);
    Fee_Wait();
    Fee_Read(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1, 0, DataReceive, 32);
    Fee_Wait();
    Test_DumpData();

    ///*Write data to block 0*/
    //RetValue = Fee_Write(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, DataBlock0);
    //Fee_ExampleAssert(E_OK == RetValue);
    ///*Perform write data to Block 0*/
    //do
    //{
    //    Fee_MainFunction();
    //    MemAcc_MainFunction();
    //    status = Fee_GetStatus();
    //} while (status != MEMIF_IDLE);
    ///* Write operation success */
    //Fee_ExampleAssert(MEMIF_JOB_OK == Fee_GetJobResult());

    ///*Read data block 0, from offset 2 and length is 2*/
    //RetValue = Fee_Read(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, 2, DataReceive, 2);
    //Fee_ExampleAssert(E_OK == RetValue);

    ///*Perform read data form Block 0*/
    //do
    //{
    //    Fee_MainFunction();
    //    MemAcc_MainFunction();
    //    status = Fee_GetStatus();
    //} while (status != MEMIF_IDLE);
    //Fee_ExampleAssert(MEMIF_JOB_OK == Fee_GetJobResult());
    ///*Check Data*/
    //if((DataReceive[0] != DataBlock0[2])|| (DataReceive[1] != DataBlock0[3]))
    //{
    //    RetValue = E_NOT_OK;
    //}
    //else
    //{
    //    RetValue = E_OK;
    //}

    X86_Unload();

    return RetValue;
}

#ifdef __cplusplus
}
#endif

/** @} */
#if 0
void Memory_Init(void) {
    // Mem_43_INFLS_Init(NULL_PTR);
//    MemAcc_Init(&MemAcc_Config);
//    Fee_Init(NULL_PTR);
}

bool Memory_MainFunction(void) {
    //    Fee_MainFunction();
    //    MemAcc_MainFunction();
        // Mem_43_INFLS_MainFunction();
    //    return MEMIF_IDLE != Fee_GetStatus();
    return false;
}

bool Memory_Success(void) {
    //    return MEMIF_JOB_OK == Fee_GetJobResult();
    return true;
}

static bool BlockRead(uint32_t BlockID, uint32_t Offset, uint8_t* pData, size_t Length) {
    if ((BlockID < BLOCKCOUNT) && (E_OK == Fee_Read((uint16)BlockID, (uint16)Offset, pData, (uint16)Length))) {
        while (Memory_MainFunction())
            ;
        return Memory_Success();
    }
    else {
        return false;
    }
}

static bool BlockWrite(uint32_t BlockID, uint32_t Offset, uint8_t* pData, size_t Length) {
    if ((BlockID >= BLOCKCOUNT) || ((Offset + Length) > BLOCKSIZE)) {
        return false;
    }

    uint8_t tempBlock[BLOCKSIZE];

    // A partial write requires reading the block first.
    if ((Offset > 0) || (Length < BLOCKSIZE)) {
        if (E_OK != Fee_Read((uint16)BlockID, 0, tempBlock, BLOCKSIZE)) {
            return false; // Could not start job
        }
        while (Memory_MainFunction())
            ;
        if (!Memory_Success()) {
            return false;
        }
    }

    // Modify data in buffer
    for (size_t i = 0; i < Length; i++) {
        tempBlock[Offset + i] = pData[i];
    }

    // Write entire block
    if (E_OK == Fee_Write((uint16)BlockID, tempBlock)) {
        while (Memory_MainFunction())
            ;
        return Memory_Success();
    }
    else {
        return false;
    }
}
Memory_Init();
while (Memory_MainFunction()) {
    /* Wait for memory initialization to complete */
}

#endif