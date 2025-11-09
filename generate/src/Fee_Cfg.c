/*==================================================================================================
* Project              : RTD AUTOSAR 4.7
* Platform             : CORTEXM
* Peripheral           : none
* Dependencies         : MemAcc
*
* Autosar Version      : 4.7.0
* Autosar Revision     : ASR_REL_4_7_REV_0000
* Autosar Conf.Variant :
* SW Version           : 6.0.0
* Build Version        : S32K3_RTD_6_0_0_D2506_ASR_REL_4_7_REV_0000_20250610
*
* Copyright 2020 - 2025 NXP
*
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly
* in accordance with the applicable license terms.  By expressly accepting
* such terms or by downloading, installing, activating and/or otherwise using
* the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to
* be bound by the applicable license terms, then you may not retain,
* install, activate or otherwise use the software.
*
==================================================================================================*/

/**
*   @file
*
*   @addtogroup FEE
*   @{
*/
/*   @implements Fee_Cfg.c_Artifact*/
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fee.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FEE_VENDOR_ID_CFG_C                      43
#define FEE_AR_RELEASE_MAJOR_VERSION_CFG_C       4
#define FEE_AR_RELEASE_MINOR_VERSION_CFG_C       7
#define FEE_AR_RELEASE_REVISION_VERSION_CFG_C    0
#define FEE_SW_MAJOR_VERSION_CFG_C               6
#define FEE_SW_MINOR_VERSION_CFG_C               0
#define FEE_SW_PATCH_VERSION_CFG_C               0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Fee header file are of the same vendor */
#if (FEE_VENDOR_ID_CFG_C != FEE_VENDOR_ID)
    #error "Fee_Cfg.c and Fee.h have different vendor ids"
#endif
/* Check if current file and Fee header file are of the same Autosar version */
#if ((FEE_AR_RELEASE_MAJOR_VERSION_CFG_C    != FEE_AR_RELEASE_MAJOR_VERSION) || \
     (FEE_AR_RELEASE_MINOR_VERSION_CFG_C    != FEE_AR_RELEASE_MINOR_VERSION) || \
     (FEE_AR_RELEASE_REVISION_VERSION_CFG_C != FEE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Fee_Cfg.c and Fee.h are different"
#endif
/* Check if current file and Fee header file are of the same Software version */
#if ((FEE_SW_MAJOR_VERSION_CFG_C != FEE_SW_MAJOR_VERSION) || \
     (FEE_SW_MINOR_VERSION_CFG_C != FEE_SW_MINOR_VERSION) || \
     (FEE_SW_PATCH_VERSION_CFG_C != FEE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Fee_Cfg.c and Fee.h are different"
#endif


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

/* Configuration of cluster group FeeClusterGroup_0 */
static const Fee_ClusterType Fee_FeeClusterGroup_0[2] =
{
    /*FeeCluster_0*/
    {
        0U, /* Start address */
        65536U /* Size */
    },
    /*FeeCluster_1*/
    {
        65536U, /* Start address */
        65536U /* Size */
    }
};

/* Configuration of cluster group set */
const Fee_ClusterGroupType Fee_ClrGrps[FEE_NUMBER_OF_CLUSTER_GROUPS] =
{
    /*FeeClusterGroup_0*/
    {
        Fee_FeeClusterGroup_0, /* Cluster set */
        2U, /* Number of clusters */
        0U /* Size of the reserved area */
    }
};

/* Configuration of Fee blocks */
const Fee_BlockConfigType Fee_BlockConfig[FEE_CRT_CFG_NR_OF_BLOCKS] =
{
    /*FeeBlockConfiguration_0*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_1*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_2*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_2, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_3*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_3, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_4*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_4, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_5*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_5, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_6*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_6, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_7*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_7, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_8*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_8, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_9*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_9, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_10*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_10, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_11*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_11, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_12*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_12, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_13*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_13, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_14*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_14, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_15*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_15, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_16*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_16, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_17*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_17, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_18*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_18, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_19*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_19, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_20*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_20, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_21*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_21, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_22*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_22, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_23*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_23, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_24*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_24, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_25*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_25, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_26*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_26, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_27*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_27, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_28*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_28, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_29*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_29, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_30*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_30, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_31*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_31, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_32*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_32, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_33*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_33, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_34*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_34, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_35*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_35, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_36*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_36, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_37*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_37, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_38*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_38, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_39*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_39, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_40*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_40, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_41*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_41, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_42*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_42, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_43*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_43, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_44*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_44, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_45*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_45, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_46*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_46, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_47*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_47, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_48*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_48, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_49*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_49, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_50*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_50, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_51*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_51, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_52*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_52, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_53*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_53, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_54*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_54, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_55*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_55, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_56*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_56, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_57*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_57, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_58*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_58, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_59*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_59, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_60*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_60, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_61*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_61, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_62*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_62, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_63*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_63, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_64*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_64, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_65*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_65, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_66*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_66, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_67*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_67, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_68*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_68, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_69*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_69, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_70*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_70, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_71*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_71, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_72*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_72, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_73*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_73, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_74*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_74, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_75*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_75, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_76*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_76, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_77*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_77, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_78*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_78, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_79*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_79, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_80*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_80, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_81*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_81, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_82*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_82, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_83*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_83, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_84*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_84, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_85*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_85, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_86*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_86, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_87*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_87, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_88*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_88, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_89*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_89, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_90*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_90, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_91*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_91, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_92*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_92, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_93*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_93, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_94*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_94, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_95*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_95, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_96*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_96, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_97*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_97, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_98*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_98, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_99*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_99, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_100*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_100, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_101*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_101, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_102*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_102, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_103*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_103, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_104*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_104, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_105*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_105, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_106*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_106, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_107*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_107, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_108*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_108, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_109*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_109, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_110*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_110, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_111*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_111, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_112*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_112, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_113*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_113, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_114*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_114, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_115*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_115, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_116*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_116, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_117*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_117, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_118*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_118, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_119*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_119, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_120*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_120, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_121*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_121, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_122*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_122, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_123*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_123, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_124*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_124, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_125*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_125, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_126*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_126, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_127*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_127, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_128*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_128, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_129*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_129, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_130*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_130, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_131*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_131, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_132*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_132, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_133*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_133, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_134*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_134, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_135*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_135, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_136*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_136, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_137*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_137, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_138*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_138, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_139*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_139, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_140*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_140, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_141*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_141, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_142*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_142, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_143*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_143, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_144*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_144, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_145*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_145, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_146*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_146, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_147*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_147, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_148*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_148, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_149*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_149, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_150*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_150, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_151*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_151, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_152*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_152, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_153*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_153, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_154*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_154, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_155*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_155, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_156*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_156, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_157*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_157, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_158*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_158, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_159*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_159, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_160*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_160, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_161*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_161, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_162*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_162, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_163*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_163, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_164*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_164, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_165*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_165, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_166*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_166, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_167*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_167, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_168*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_168, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_169*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_169, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_170*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_170, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_171*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_171, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_172*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_172, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_173*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_173, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_174*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_174, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_175*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_175, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_176*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_176, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_177*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_177, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_178*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_178, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_179*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_179, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_180*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_180, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_181*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_181, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_182*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_182, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_183*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_183, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_184*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_184, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_185*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_185, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_186*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_186, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_187*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_187, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_188*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_188, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_189*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_189, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_190*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_190, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_191*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_191, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_192*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_192, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_193*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_193, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_194*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_194, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_195*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_195, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_196*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_196, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_197*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_197, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_198*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_198, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_199*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_199, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_200*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_200, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_201*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_201, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_202*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_202, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_203*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_203, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_204*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_204, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_205*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_205, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_206*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_206, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_207*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_207, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_208*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_208, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_209*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_209, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_210*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_210, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_211*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_211, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_212*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_212, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_213*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_213, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_214*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_214, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_215*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_215, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_216*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_216, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_217*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_217, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_218*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_218, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_219*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_219, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_220*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_220, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_221*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_221, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_222*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_222, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_223*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_223, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_224*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_224, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_225*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_225, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_226*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_226, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_227*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_227, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_228*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_228, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_229*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_229, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_230*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_230, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_231*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_231, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_232*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_232, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_233*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_233, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_234*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_234, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_235*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_235, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_236*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_236, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_237*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_237, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_238*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_238, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_239*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_239, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_240*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_240, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_241*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_241, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_242*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_242, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_243*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_243, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_244*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_244, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_245*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_245, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_246*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_246, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_247*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_247, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_248*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_248, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_249*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_249, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_250*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_250, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_251*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_251, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_252*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_252, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_253*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_253, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_254*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_254, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_255*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_255, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_256*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_256, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_257*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_257, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_258*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_258, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_259*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_259, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_260*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_260, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_261*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_261, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_262*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_262, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_263*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_263, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_264*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_264, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_265*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_265, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_266*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_266, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_267*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_267, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_268*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_268, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_269*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_269, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_270*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_270, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_271*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_271, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_272*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_272, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_273*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_273, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_274*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_274, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_275*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_275, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_276*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_276, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_277*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_277, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_278*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_278, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_279*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_279, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_280*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_280, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_281*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_281, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_282*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_282, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_283*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_283, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_284*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_284, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_285*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_285, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_286*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_286, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_287*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_287, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_288*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_288, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_289*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_289, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_290*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_290, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_291*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_291, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_292*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_292, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_293*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_293, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_294*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_294, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_295*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_295, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_296*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_296, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_297*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_297, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_298*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_298, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_299*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_299, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_300*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_300, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_301*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_301, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_302*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_302, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_303*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_303, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_304*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_304, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_305*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_305, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_306*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_306, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_307*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_307, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_308*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_308, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_309*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_309, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_310*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_310, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_311*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_311, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_312*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_312, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_313*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_313, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_314*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_314, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_315*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_315, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_316*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_316, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_317*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_317, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_318*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_318, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_319*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_319, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_320*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_320, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_321*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_321, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_322*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_322, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_323*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_323, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_324*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_324, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_325*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_325, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_326*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_326, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_327*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_327, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_328*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_328, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_329*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_329, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_330*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_330, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_331*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_331, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_332*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_332, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_333*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_333, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_334*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_334, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_335*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_335, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_336*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_336, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_337*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_337, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_338*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_338, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_339*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_339, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_340*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_340, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_341*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_341, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_342*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_342, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_343*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_343, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_344*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_344, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_345*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_345, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_346*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_346, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_347*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_347, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_348*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_348, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_349*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_349, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_350*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_350, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_351*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_351, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_352*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_352, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_353*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_353, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_354*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_354, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_355*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_355, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_356*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_356, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_357*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_357, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_358*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_358, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_359*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_359, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_360*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_360, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_361*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_361, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_362*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_362, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_363*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_363, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_364*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_364, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_365*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_365, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_366*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_366, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_367*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_367, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_368*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_368, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_369*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_369, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_370*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_370, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_371*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_371, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_372*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_372, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_373*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_373, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_374*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_374, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_375*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_375, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_376*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_376, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_377*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_377, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_378*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_378, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_379*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_379, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_380*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_380, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_381*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_381, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_382*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_382, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_383*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_383, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_384*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_384, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_385*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_385, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_386*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_386, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_387*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_387, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_388*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_388, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_389*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_389, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_390*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_390, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_391*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_391, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_392*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_392, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_393*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_393, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_394*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_394, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_395*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_395, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_396*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_396, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_397*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_397, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_398*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_398, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_399*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_399, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_400*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_400, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_401*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_401, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_402*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_402, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_403*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_403, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_404*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_404, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_405*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_405, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_406*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_406, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_407*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_407, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_408*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_408, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_409*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_409, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_410*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_410, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_411*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_411, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_412*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_412, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_413*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_413, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_414*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_414, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_415*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_415, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_416*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_416, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_417*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_417, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_418*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_418, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_419*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_419, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_420*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_420, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_421*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_421, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_422*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_422, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_423*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_423, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_424*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_424, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_425*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_425, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_426*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_426, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_427*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_427, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_428*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_428, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_429*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_429, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_430*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_430, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_431*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_431, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_432*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_432, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_433*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_433, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_434*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_434, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_435*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_435, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_436*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_436, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_437*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_437, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_438*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_438, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_439*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_439, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_440*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_440, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_441*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_441, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_442*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_442, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_443*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_443, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_444*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_444, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_445*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_445, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_446*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_446, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_447*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_447, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_448*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_448, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_449*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_449, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_450*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_450, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_451*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_451, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_452*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_452, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_453*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_453, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_454*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_454, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_455*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_455, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_456*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_456, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_457*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_457, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_458*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_458, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_459*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_459, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_460*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_460, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_461*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_461, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_462*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_462, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_463*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_463, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_464*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_464, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_465*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_465, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_466*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_466, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_467*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_467, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_468*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_468, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_469*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_469, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_470*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_470, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_471*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_471, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_472*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_472, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_473*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_473, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_474*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_474, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_475*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_475, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_476*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_476, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_477*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_477, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_478*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_478, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_479*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_479, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_480*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_480, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_481*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_481, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_482*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_482, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_483*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_483, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_484*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_484, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_485*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_485, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_486*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_486, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_487*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_487, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_488*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_488, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_489*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_489, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_490*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_490, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_491*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_491, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_492*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_492, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_493*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_493, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_494*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_494, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_495*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_495, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_496*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_496, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_497*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_497, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_498*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_498, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_499*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_499, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_500*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_500, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_501*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_501, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_502*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_502, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_503*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_503, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_504*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_504, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_505*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_505, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_506*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_506, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_507*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_507, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_508*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_508, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_509*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_509, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_510*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_510, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_511*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_511, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_512*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_512, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_513*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_513, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_514*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_514, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_515*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_515, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_516*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_516, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_517*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_517, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_518*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_518, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_519*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_519, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_520*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_520, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_521*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_521, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_522*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_522, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_523*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_523, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_524*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_524, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_525*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_525, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_526*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_526, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_527*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_527, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_528*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_528, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_529*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_529, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_530*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_530, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_531*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_531, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_532*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_532, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_533*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_533, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_534*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_534, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_535*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_535, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_536*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_536, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_537*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_537, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_538*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_538, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_539*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_539, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_540*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_540, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_541*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_541, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_542*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_542, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_543*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_543, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_544*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_544, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_545*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_545, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_546*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_546, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_547*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_547, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_548*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_548, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_549*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_549, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_550*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_550, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_551*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_551, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_552*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_552, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_553*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_553, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_554*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_554, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_555*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_555, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_556*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_556, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_557*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_557, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_558*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_558, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_559*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_559, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_560*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_560, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_561*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_561, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_562*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_562, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_563*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_563, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_564*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_564, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_565*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_565, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_566*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_566, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_567*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_567, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_568*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_568, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_569*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_569, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_570*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_570, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_571*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_571, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_572*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_572, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_573*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_573, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_574*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_574, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_575*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_575, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_576*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_576, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_577*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_577, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_578*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_578, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_579*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_579, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_580*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_580, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_581*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_581, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_582*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_582, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_583*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_583, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_584*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_584, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_585*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_585, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_586*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_586, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_587*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_587, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_588*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_588, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_589*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_589, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_590*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_590, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_591*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_591, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_592*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_592, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_593*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_593, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_594*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_594, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_595*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_595, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_596*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_596, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_597*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_597, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_598*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_598, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_599*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_599, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_600*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_600, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_601*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_601, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_602*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_602, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_603*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_603, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_604*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_604, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_605*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_605, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_606*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_606, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_607*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_607, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_608*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_608, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_609*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_609, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_610*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_610, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_611*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_611, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_612*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_612, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_613*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_613, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_614*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_614, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_615*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_615, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_616*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_616, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_617*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_617, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_618*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_618, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_619*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_619, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_620*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_620, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_621*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_621, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_622*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_622, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_623*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_623, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_624*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_624, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_625*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_625, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_626*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_626, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_627*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_627, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_628*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_628, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_629*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_629, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_630*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_630, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_631*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_631, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_632*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_632, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_633*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_633, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_634*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_634, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_635*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_635, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_636*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_636, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_637*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_637, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_638*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_638, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_639*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_639, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_640*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_640, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_641*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_641, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_642*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_642, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_643*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_643, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_644*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_644, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_645*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_645, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_646*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_646, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_647*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_647, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_648*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_648, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_649*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_649, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_650*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_650, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_651*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_651, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_652*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_652, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_653*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_653, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_654*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_654, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_655*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_655, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_656*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_656, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_657*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_657, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_658*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_658, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_659*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_659, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_660*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_660, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_661*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_661, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_662*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_662, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_663*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_663, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_664*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_664, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_665*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_665, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_666*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_666, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_667*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_667, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_668*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_668, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_669*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_669, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_670*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_670, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_671*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_671, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_672*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_672, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_673*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_673, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_674*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_674, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_675*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_675, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_676*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_676, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_677*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_677, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_678*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_678, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_679*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_679, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_680*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_680, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_681*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_681, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_682*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_682, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_683*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_683, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_684*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_684, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_685*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_685, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_686*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_686, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_687*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_687, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_688*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_688, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_689*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_689, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_690*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_690, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_691*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_691, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_692*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_692, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_693*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_693, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_694*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_694, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_695*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_695, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_696*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_696, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_697*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_697, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_698*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_698, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_699*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_699, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_700*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_700, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_701*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_701, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_702*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_702, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_703*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_703, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_704*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_704, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_705*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_705, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_706*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_706, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_707*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_707, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_708*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_708, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_709*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_709, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_710*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_710, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_711*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_711, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_712*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_712, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_713*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_713, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_714*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_714, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_715*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_715, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_716*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_716, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_717*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_717, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_718*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_718, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_719*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_719, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_720*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_720, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_721*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_721, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_722*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_722, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_723*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_723, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_724*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_724, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_725*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_725, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_726*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_726, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_727*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_727, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_728*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_728, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_729*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_729, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_730*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_730, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_731*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_731, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_732*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_732, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_733*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_733, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_734*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_734, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_735*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_735, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_736*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_736, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_737*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_737, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_738*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_738, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_739*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_739, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_740*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_740, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_741*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_741, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_742*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_742, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_743*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_743, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_744*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_744, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_745*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_745, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_746*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_746, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_747*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_747, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_748*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_748, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_749*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_749, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_750*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_750, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_751*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_751, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_752*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_752, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_753*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_753, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_754*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_754, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_755*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_755, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_756*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_756, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_757*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_757, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_758*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_758, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_759*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_759, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_760*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_760, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_761*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_761, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_762*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_762, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_763*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_763, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_764*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_764, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_765*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_765, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_766*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_766, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_767*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_767, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_768*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_768, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_769*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_769, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_770*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_770, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_771*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_771, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_772*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_772, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_773*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_773, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_774*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_774, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_775*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_775, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_776*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_776, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_777*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_777, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_778*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_778, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_779*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_779, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_780*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_780, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_781*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_781, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_782*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_782, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_783*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_783, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_784*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_784, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_785*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_785, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_786*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_786, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_787*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_787, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_788*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_788, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_789*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_789, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_790*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_790, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_791*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_791, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_792*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_792, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_793*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_793, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_794*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_794, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_795*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_795, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_796*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_796, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_797*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_797, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_798*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_798, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_799*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_799, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_800*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_800, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_801*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_801, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_802*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_802, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_803*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_803, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_804*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_804, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_805*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_805, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_806*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_806, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_807*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_807, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_808*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_808, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_809*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_809, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_810*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_810, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_811*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_811, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_812*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_812, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_813*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_813, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_814*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_814, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_815*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_815, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_816*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_816, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_817*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_817, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_818*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_818, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_819*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_819, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_820*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_820, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_821*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_821, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_822*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_822, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_823*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_823, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_824*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_824, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_825*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_825, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_826*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_826, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_827*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_827, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_828*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_828, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_829*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_829, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_830*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_830, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_831*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_831, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_832*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_832, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_833*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_833, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_834*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_834, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_835*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_835, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_836*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_836, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_837*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_837, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_838*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_838, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_839*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_839, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_840*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_840, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_841*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_841, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_842*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_842, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_843*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_843, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_844*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_844, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_845*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_845, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_846*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_846, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_847*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_847, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_848*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_848, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_849*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_849, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_850*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_850, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_851*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_851, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_852*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_852, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_853*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_853, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_854*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_854, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_855*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_855, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_856*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_856, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_857*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_857, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_858*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_858, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_859*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_859, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_860*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_860, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_861*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_861, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_862*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_862, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_863*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_863, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_864*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_864, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_865*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_865, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_866*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_866, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_867*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_867, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_868*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_868, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_869*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_869, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_870*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_870, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_871*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_871, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_872*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_872, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_873*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_873, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_874*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_874, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_875*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_875, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_876*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_876, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_877*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_877, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_878*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_878, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_879*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_879, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_880*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_880, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_881*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_881, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_882*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_882, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_883*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_883, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_884*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_884, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_885*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_885, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_886*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_886, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_887*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_887, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_888*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_888, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_889*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_889, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_890*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_890, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_891*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_891, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_892*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_892, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_893*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_893, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_894*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_894, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_895*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_895, /* FeeBlockNumber symbol */
        32U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    }
};

#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

