/* yj changed*/
#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================

    MODULE NAME : config_data.c

    GENERAL DESCRIPTION
        This file contains runtime configuration database file.
        
    NEWGEN Telecom Confidential Proprietary
    (c) Copyright 2002 by NEWGEN Telecom Corp. All Rights Reserved.
====================================================================================================

    Revision History
   
    Modification                  Tracking
    Date         Author           Number      Description of changes
    ----------   --------------   ---------   ------------------------------------------------------
    11/02/2002   Stanley Park     cr20195     Initial file creation.
    11/24/2003   Stanley Park     cr21829     Profile feature per MCC/MNC

====================================================================================================
    INCLUDE FILES
==================================================================================================*/

#include "config_manager.h"

/*==================================================================================================
    GLOBAL VARIABLES                                                                
==================================================================================================*/
/*
 * Configuration data file version convention
 *
 * Configuration data version consists of three part. product ID, Customer ID and version
 *
 * <product ID> <customer ID> <config data version>
 *
 * <product ID>    format A.B  product id is to identify H/W platform
 *                 ZZ       is reserved for engineering test version.
 *                 A1       Poseidon
 *                 A2       Jupiter
 *
 * <customer ID>   customer id is to identify customer such as distributers and/or operators
 *                 L1         legend
 *
 * <version>       version number. increamental...
 *                 01
 *
 * IMPORTANT NOTICE !!!
 * USE ONLY "ZZ.EN.00" for private (engineering purppose) configuration file to avoid confusion.
 */

/*
 * All configuration date included here per product type definition
 * All included files are auto-generated.
 */
#ifdef PRODUCT_TYPE_DEFAULT
#include "hermes_default_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_HERMES
#include "hermes_default_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_CHANEL
#include "chanel_default_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_TOPAZ
#include "topaz_default_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_HERMES_KEJIAN
#include "hermes_kejian_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_CHANEL_NEC
#include "chanel_nec_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_HERMES_DPC
#include "hermes_dpc_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_HERMES_HYELCD
#include "hermes_hyelcd_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_HERMES_REF1_DAXIAN
#include "hermes_ref1_daxian_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_HERMES_REF1_GEO
#include "hermes_ref1_geo_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_OBELISK_CECT
#include "obelisk_cect_cfg.tbl"
#endif

#ifdef PRODUCT_TYPE_HERMES_REF2_TOP
#include "hermes_ref2_top_cfg.tbl"
#endif


#ifdef __cplusplus
}
#endif
