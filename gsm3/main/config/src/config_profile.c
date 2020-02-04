#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================

    MODULE NAME : config_profile.c

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
#include "rm_include.h"
#include "config_profile.h"

//const unsigned int     config_profile_magic = CONFIG_PROFILE_MAGIC_NUMBER;

/*==================================================================================================
    Master MCC and profile matching table
==================================================================================================*/
extern const CONFIG_PROFILE_GENERAL_DATA_T  config_general_table_default;
extern const CONFIG_PROFILE_GENERAL_DATA_T  config_general_table_china;
extern const CONFIG_PROFILE_GENERAL_DATA_T  config_general_table_hongkong;
extern const CONFIG_PROFILE_GENERAL_DATA_T  config_general_table_thai;
extern const CONFIG_PROFILE_GENERAL_DATA_T  config_general_table_ME;
extern const CONFIG_PROFILE_GENERAL_DATA_T  config_general_table_africa602;


const CONFIG_PROFILE_GENERAL_DATA_T      *config_mcc_table[CONFIG_DATA_MAX] = {

    /* MCC             entry pointer */
    &config_general_table_default,         /* index 0  */
    &config_general_table_china ,         /* index 1  */
    &config_general_table_hongkong,      /* index 2  */
    &config_general_table_thai ,          /* index 3  */
    &config_general_table_ME ,            /* index 4  */
    &config_general_table_africa602 ,     /* index 5  */
    &config_general_table_africa602 ,         /* index 6  */
    &config_general_table_default ,         /* index 7  */
    &config_general_table_default ,         /* index 8  */
    &config_general_table_default ,         /* index 9  */
    &config_general_table_default ,         /* index 10  */
};


/*==================================================================================================
    Following section is for default Market
==================================================================================================*/


#ifdef __cplusplus
}
#endif

