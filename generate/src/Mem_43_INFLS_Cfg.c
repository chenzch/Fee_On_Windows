/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : C40
*   Dependencies         : None
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 6.0.0
*   Build Version        : S32K3_RTD_6_0_0_D2506_ASR_REL_4_7_REV_0000_20250610
*
*   Copyright 2020 - 2025 NXP
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
 * @file        Mem_43_INFLS_Cfg.c
 *
 * @addtogroup  MEM_43_INFLS
 * implement    Mem_43_INFLS_Cfg.c_Artifact
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
#include "Mem_43_INFLS_Cfg.h"
#include "C40_Ip_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEM_43_INFLS_VENDOR_ID_CFG_C                          43
#define MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C           4
#define MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C           7
#define MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C        0
#define MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C                   6
#define MEM_43_INFLS_SW_MINOR_VERSION_CFG_C                   0
#define MEM_43_INFLS_SW_PATCH_VERSION_CFG_C                   0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same vendor */
#if (MEM_43_INFLS_VENDOR_ID_CFG_C != MEM_43_INFLS_VENDOR_ID_CFG)
    #error "Mem_43_INFLS_Cfg.c and Mem_43_INFLS_Cfg.h have different vendor ids"
#endif
/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same Autosar version */
#if ((MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C    != MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C != MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Mem_43_INFLS_Cfg.c and Mem_43_INFLS_Cfg.h are different"
#endif
/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same Software version */
#if ((MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C != MEM_43_INFLS_SW_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_MINOR_VERSION_CFG_C != MEM_43_INFLS_SW_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_PATCH_VERSION_CFG_C != MEM_43_INFLS_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Mem_43_INFLS_Cfg.c and Mem_43_INFLS_Cfg.h are different"
#endif

/* Check if current file and C40_Ip_Cfg.h header file are of the same vendor */
#if (MEM_43_INFLS_VENDOR_ID_CFG_C != C40_IP_VENDOR_ID_CFG)
    #error "Mem_43_INFLS_Cfg.c and C40_Ip_Cfg.h have different vendor ids"
#endif
/* Check if current file and C40_Ip_Cfg.h header file are of the same Autosar version */
#if ((MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != C40_IP_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C    != C40_IP_AR_RELEASE_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C != C40_IP_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Mem_43_INFLS_Cfg.c and C40_Ip_Cfg.h are different"
#endif
/* Check if current file and C40_Ip_Cfg.h header file are of the same Software version */
#if ((MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C != C40_IP_SW_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_MINOR_VERSION_CFG_C != C40_IP_SW_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_PATCH_VERSION_CFG_C != C40_IP_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Mem_43_INFLS_Cfg.c and C40_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL CONSTANT DECLARATIONS
==================================================================================================*/

#define MEM_43_INFLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mem_43_INFLS_MemMap.h"

/* Mem Internal Units Configurations */
static const Mem_43_INFLS_InternalUnitType Mem_43_INFLS_InternalUnitsCfg[MEM_43_INFLS_INTERNAL_UNIT_COUNT] =
{
    {
        &C40_Ip_InitCfg                                    /* InternalConfig */
    }
};

/* Mem Devices Configurations */
static const Mem_43_INFLS_MemDeviceType Mem_43_INFLS_MemDevices =
{
    Mem_43_INFLS_InternalUnitsCfg                          /* InternalUnits */
};


/* Configuration of MemSectorBatch for MemInstance_0 */
static const Mem_43_INFLS_SectorBatchType Mem_43_INFLS_MemInstance_0_SectorBatch[16U] =
{
    {
        /* MemSectorBatch_0 */
        268435456U,                                        /* StartAddress   */
        268443647U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_1 */
        268443648U,                                        /* StartAddress   */
        268451839U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_2 */
        268451840U,                                        /* StartAddress   */
        268460031U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_3 */
        268460032U,                                        /* StartAddress   */
        268468223U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_4 */
        268468224U,                                        /* StartAddress   */
        268476415U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_5 */
        268476416U,                                        /* StartAddress   */
        268484607U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_6 */
        268484608U,                                        /* StartAddress   */
        268492799U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_7 */
        268492800U,                                        /* StartAddress   */
        268500991U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_8 */
        268500992U,                                        /* StartAddress   */
        268509183U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_9 */
        268509184U,                                        /* StartAddress   */
        268517375U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_10 */
        268517376U,                                        /* StartAddress   */
        268525567U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_11 */
        268525568U,                                        /* StartAddress   */
        268533759U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_12 */
        268533760U,                                        /* StartAddress   */
        268541951U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_13 */
        268541952U,                                        /* StartAddress   */
        268550143U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_14 */
        268550144U,                                        /* StartAddress   */
        268558335U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    },
    {
        /* MemSectorBatch_15 */
        268558336U,                                        /* StartAddress   */
        268566527U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        8192U,                                             /* ReadBurstSize  */
        128U                                               /* WriteBurstSize */
    }
};


/* Configuration of Mem Instances */
static const Mem_43_INFLS_MemInstanceType Mem_43_INFLS_MemInstances[MEM_43_INFLS_MEM_INSTANCE_COUNT] =
{
    {
        /* MemInstance_0 */
        MEM_43_INFLS_INSTANCE_0_ID,                        /* InstanceId       */
        16U,                                               /* SectorBatchCount */
        Mem_43_INFLS_MemInstance_0_SectorBatch,            /* SectorBatches    */
#if (STD_ON == MEM_43_INFLS_HW_UTESTMODE_SERVICE)
        NULL_PTR,                                          /* UtestConfig      */
#endif
        0U                                                 /* MemUnitIndex     */
    }
};


/* Configuration of Mem_43_INFLS */
const Mem_43_INFLS_ConfigType Mem_43_INFLS_Config =
{
#if (STD_ON == MEM_43_INFLS_AC_LOAD_ON_JOB_START)
    (Mem_43_INFLS_AcErasePtrType)0x00000000U,              /* MemAcErasePtr */
    (Mem_43_INFLS_AcWritePtrType)0x00000000U,              /* MemAcWritePtr */
#endif
    NULL_PTR,                                              /* MemAcCallback */
    Mem_43_INFLS_MemInstances,                             /* MemInstances  */
    &Mem_43_INFLS_MemDevices,                              /* MemDevices    */
#if (STD_ON == MEM_43_INFLS_CHECK_CFG_CRC)
    6991U                                                  /* u16ConfigCrc  */
#endif
};


#define MEM_43_INFLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mem_43_INFLS_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

