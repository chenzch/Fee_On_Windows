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
const uint8 DataBlock0[4] = {0x00,0x01,0x02,0x03};

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
uint8 DataReceive[2] = {0x0,0x0};

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
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
extern void X86_Unload(void);
/**
* @brief        Main function of the example
* @details      Initializez the used drivers and uses the Gpt
*               and Dio drivers to toggle a LED periodically
*/
int main(void)
{
    MemIf_StatusType status = MEMIF_IDLE;
    Std_ReturnType RetValue = E_NOT_OK;

    /* Init MemAcc */
    MemAcc_Init(NULL_PTR);

    /* Init Fee */
    Fee_Init(NULL_PTR);
    do
    {
        Fee_MainFunction();
        MemAcc_MainFunction();
        status = Fee_GetStatus();
    } while (status != MEMIF_IDLE);
    /* Init fee success */
    Fee_ExampleAssert(MEMIF_JOB_OK == Fee_GetJobResult());

    Fee_Write(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, DataBlock0);
    Fee_MainFunction();
    MemAcc_MainFunction();
    Fee_MainFunction();
    MemAcc_MainFunction();

    Fee_Cancel();
    do
    {
        Fee_MainFunction();
        MemAcc_MainFunction();
        status = MemAcc_GetJobResult(FEE_MEMACC_ADDRESS_AREA_ID_USED);
    } while (status != MEMACC_MEM_CANCELED);
    Fee_Write(FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, DataBlock0);
    do
    {
        Fee_MainFunction();
        MemAcc_MainFunction();
        status = Fee_GetStatus();
    } while (status != MEMIF_IDLE);



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
