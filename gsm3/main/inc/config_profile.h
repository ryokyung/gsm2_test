#ifndef CONFIG_PROFILE_H
#define CONFIG_PROFILE_H
/*==================================================================================================

    HEADER NAME : config_profile.h

    GENERAL DESCRIPTION
        This header file contains all the software configuration profile data structures.

    NEWGEN Telecom Confidential Proprietary
    (c) Copyright 2003 by NEWGEN Telecom Corp. All Rights Reserved.
====================================================================================================

    Revision History
    Modification                  Tracking
    Date         Author           Number      Description of changes
    ----------   --------------   ---------   ------------------------------------------------------
    11/24/2003   Stanley Park     cr21829     Profile feature per MCC/MNC

====================================================================================================
    INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
    CONSTANTS
==================================================================================================*/
/*
 * Magic number for verify the validity of the config profile data
 */
#define CONFIG_PROFILE_MAGIC_NUMBER       0x5A5A0308

/*
 * Support up-to 8 languages
 */
#define CONFIG_PROFILE_MAX_LANG           8

#define CONFIG_PROFILE_ATTRIBUTE_WAP      0x01
#define CONFIG_PROFILE_ATTRIBUTE_MMS      0x02
#define CONFIG_PROFILE_ATTRIBUTE_JAVA     0x04
#define CONFIG_PROFILE_ATTRIBUTE_NONE     0x00

/*==================================================================================================
    MACROS
==================================================================================================*/
#define  CONFIG_DATA_MAX  11

/*==================================================================================================
    ENUMERATIONS
==================================================================================================*/
typedef enum {
CONFIG_DATA_GENERAL,  
CONFIG_DATA_CHINA,
CONFIG_DATA_HONGKONG,
CONFIG_DATA_THAI,
CONFIG_DATA_ME_ASIA,
CONFIG_DATA_AFRICA_1,
CONFIG_DATA_AFRICA_2,
CONFIG_DATA_RESERVED_7,
CONFIG_DATA_RESERVED_8,
CONFIG_DATA_RESERVED_9,
CONFIG_DATA_RESERVED_10

} CONFIG_DATA_ENUM_T;

/*==================================================================================================
    DATA STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

typedef struct {
    unsigned char                           bearer_type;
    unsigned char                           connection_type;
    unsigned char                           ip_addr[ 4 ];
    unsigned char                           dns1[ 4 ];
    unsigned char                           dns2[ 4 ];
    unsigned char                           port_num[ 6 ];
    unsigned char                           apn[ 22 ];
    unsigned char                           dial_string[ 22 ];
    unsigned char                           gprs_uid[ 12 ];
    unsigned char                           gprs_pw[ 22 ];
    unsigned char                           csd_uid[ 12 ];
    unsigned char                           csd_pw[ 22 ];
} CONFIG_PROFILE_NETWORK_DATA_T;

typedef struct {
    unsigned char                           netacnt_name[ 16 ];
    unsigned char                           homepage_title[ 32 ];
    unsigned char                           homepage_url[ 128 ];
    unsigned char                           mmsc_url[ 128 ];
    unsigned char                           java_url[ 128 ];
} CONFIG_PROFILE_URL_DATA_T;

typedef struct {
    unsigned short                          MNC;
    unsigned char                           net_attrib;
    const CONFIG_PROFILE_URL_DATA_T         url;
    const CONFIG_PROFILE_NETWORK_DATA_T     wap;
    const CONFIG_PROFILE_NETWORK_DATA_T     mms;
    const CONFIG_PROFILE_NETWORK_DATA_T     java;
} CONFIG_PROFILE_NETACNT_DATA_T;

typedef struct {
    unsigned char                           default_language;
    unsigned char                           language[ RM_LANG_MAX];
    unsigned char                           city_id;        /* This must mactch worldtime city index */
    unsigned char                           frequency;      /* either 50Hz or 60Hz for Camera tunning */
    unsigned char                           num_of_entry;
    const CONFIG_PROFILE_NETACNT_DATA_T     *netacnt;
} CONFIG_PROFILE_GENERAL_DATA_T;

typedef struct {
    unsigned int                          MCC;
    const CONFIG_PROFILE_GENERAL_DATA_T     *entry;
} CONFIG_PROFILE_MCC_DATA_T;

/*==================================================================================================
    GLOBAL VARIABLES DECLARATIONS
==================================================================================================*/

/*==================================================================================================
    FUNCTION PROTOTYPES
==================================================================================================*/

/*================================================================================================*/
#endif /* end of CONFIG_PROFILE_H */
