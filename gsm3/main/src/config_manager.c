#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================

    MODULE NAME : config_manager.c

    GENERAL DESCRIPTION
        This file contains config manager main module that provide run-time software dip switch services.
        
    NEWGEN Telecom Confidential Proprietary
    (c) Copyright 2002 by NEWGEN Telecom Corp. All Rights Reserved.
====================================================================================================

    Revision History
   
    Modification                  Tracking
    Date         Author           Number      Description of changes
    ----------   --------------   ---------   ------------------------------------------------------
    11/02/2002   Stanley Park     cr20195     Initial file creation.

    Self-documenting Code
    Describe/explain low-level design of this module and/or group of funtions and/or specific
    funtion that are hard to understand by reading code and thus requires detail description.
    Free format !
        
====================================================================================================
    INCLUDE FILES
==================================================================================================*/

#include "config_manager.h"
//#include "product.h"

/*==================================================================================================
    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
    LOCAL CONSTANTS
==================================================================================================*/
const char   default_config_ver_string[] = "Unavail";

/*==================================================================================================
    LOCAL TYPEDEFS - Structure, Union, Enumerations...etc
==================================================================================================*/

/*==================================================================================================
    LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
    LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
    GLOBAL VARIABLES                                                                
==================================================================================================*/
extern const unsigned char   config_data_version_header[16];
extern const unsigned char   config_data_model_name[32] ;
extern const unsigned char   config_data_manufacturer[32] ;

extern const unsigned char   config_byte_data[ CONFIG_ID_END ];
extern const unsigned short   config_word_data[ CONFIG_ID_WORD_END ];
extern const unsigned int   config_dword_data[ CONFIG_ID_DWORD_END ];

extern const unsigned short   config_data_product_id;

/*==================================================================================================
    LOCAL FUNCTIONS                                                                 
==================================================================================================*/

/*==================================================================================================
    GLOBAL FUNCTIONS
==================================================================================================*/
/*==================================================================================================
    FUNCTION: ConfigMgr_Init                                                          
                                                                                    
    DESCRIPTION:                                                                    
        Config manager initialize function 
                                                                                    
    ARGUMENTS PASSED:                                                               
        None
                                                                                    
    RETURN VALUE:                                                                   
        None
                                                                                    
    IMPORTANT NOTES:                                                                
        None                                                                        
==================================================================================================*/
void ConfigMgr_Init ( void )
{
/*    
  *    do not work..
  *    product_init();
  */    
}

/*==================================================================================================
    FUNCTION: ConfigMgr_GetModelId                                                          
                                                                                    
    DESCRIPTION:                                                                    
        Config manager initialize function 
                                                                                    
    ARGUMENTS PASSED:                                                               
        None
                                                                                    
    RETURN VALUE:                                                                   
        None
                                                                                    
    IMPORTANT NOTES:                                                                
        None                                                                        
==================================================================================================*/
unsigned short ConfigMgr_GetModelId ( void )
{
   return (config_data_product_id);
}


/*==================================================================================================
    FUNCTION: ConfigMgr_GetVersion

    DESCRIPTION:
        This function returns the configuration data file version

    ARGUMENTS PASSED:
        None

    RETURN VALUE:
        char*          version string

    IMPORTANT NOTES:
==================================================================================================*/
const char *ConfigMgr_GetVersion ( void )
{
    const char     *version_str;

    version_str = default_config_ver_string;

    /*
     * Make sure if we really have configuration data or not.
     */
    if( (config_data_version_header[0] != 0xFF)
       && (config_data_version_header[1] != 0xFF)
       && (config_data_version_header[2] != 0xFF)
       && (config_data_version_header[3] != 0xFF) )
    {
        if( (config_byte_data[0] == CONFIG_DATA_BYTE_MAGIC)
            && (config_word_data[0] == CONFIG_DATA_WORD_MAGIC)
            && (config_dword_data[0] == CONFIG_DATA_DWORD_MAGIC) )
        {
            version_str = (const char*)config_data_version_header;
        }
    }

    return version_str;
}


/*==================================================================================================
    FUNCTION: ConfigMgr_GetManufact
    
    DESCRIPTION:
        This function returns the manufacturer name string.

    ARGUMENTS PASSED:
        Void

    RETURN VALUE:
        int      string length

    IMPORTANT NOTES:
        None
==================================================================================================*/
char * ConfigMgr_GetManufact
(
    char *dest_buffer
)
{
    if( (config_data_version_header[0] != 0xFF)
       && (config_data_version_header[1] != 0xFF)
       && (config_data_version_header[2] != 0xFF)
       && (config_data_version_header[3] != 0xFF) )
    {
        if( (config_byte_data[0] == CONFIG_DATA_BYTE_MAGIC)
            && (config_word_data[0] == CONFIG_DATA_WORD_MAGIC)
            && (config_dword_data[0] == CONFIG_DATA_DWORD_MAGIC) )
        {
            strcpy( dest_buffer, config_data_manufacturer );
        }
    }
    
    return dest_buffer;
}

/*==================================================================================================
    FUNCTION: ConfigMgr_GetModel
    
    DESCRIPTION:
        This function returns the model name string.

    ARGUMENTS PASSED:
        Void

    RETURN VALUE:
        int      string length

    IMPORTANT NOTES:
        None
==================================================================================================*/
char * ConfigMgr_GetModel
(
    char *dest_buffer
)
{
    if( (config_data_version_header[0] != 0xFF)
       && (config_data_version_header[1] != 0xFF)
       && (config_data_version_header[2] != 0xFF)
       && (config_data_version_header[3] != 0xFF) )
    {
        if( (config_byte_data[0] == CONFIG_DATA_BYTE_MAGIC)
            && (config_word_data[0] == CONFIG_DATA_WORD_MAGIC)
            && (config_dword_data[0] == CONFIG_DATA_DWORD_MAGIC) )
        {
            strcpy( dest_buffer, config_data_model_name );
        }
    }
    
    return dest_buffer;
}



/*==================================================================================================
    FUNCTION: ConfigMgr_GetByte

    DESCRIPTION:
        This function returns the current setting of given config ID.

    ARGUMENTS PASSED:
        CONFIG_ID_ENUM_T

    RETURN VALUE:
        unsigned char data value
        0   if the read data is either 0xFF or 0x00.

    IMPORTANT NOTES:
        Data must be non-zero and not 0xFF to be valid data. This function returns 0 if the read data is either 0 or 0xFF
        since when NVM is erased the value is read 0xFF and thus 0xFF will be considered as invalid and off.
==================================================================================================*/
unsigned char ConfigMgr_GetByte 
(
    CONFIG_ID_ENUM_T         id
)
{
    unsigned char            value = 0;

    if( (id > CONFIG_ID_BEGIN) && (id < CONFIG_ID_END) )
    {
        value = config_byte_data[ (id - CONFIG_ID_BEGIN) ];

        if( value == CONFIG_MGR_FLAG_INVALID )
        {
            value = 0;
        }
    }

    return value;
}

/*==================================================================================================
    FUNCTION: ConfigMgr_GetWord

    DESCRIPTION:
        This function returns the current word value of given config ID.

    ARGUMENTS PASSED:
        CONFIG_ID_WORD_ENUM_T

    RETURN VALUE:
        unsigned short data value

    IMPORTANT NOTES:
        This function assumes that 0xffff means invalid. Calling function should not expect 0xffff as a valid value.
==================================================================================================*/
unsigned short ConfigMgr_GetWord
(
    CONFIG_ID_WORD_ENUM_T        id
)
{
    unsigned short           ret = CONFIG_MGR_WORD_INVALID;

    if( (id > CONFIG_ID_WORD_BEGIN) && (id < CONFIG_ID_WORD_END) )
    {
        ret = config_word_data[ (id - CONFIG_ID_WORD_BEGIN) ];
    }

    return ret;
}

/*==================================================================================================
    FUNCTION: ConfigMgr_GetDWord

    DESCRIPTION:
        This function returns the current double word value of given config ID.

    ARGUMENTS PASSED:
        CONFIG_ID_DWORD_ENUM_T

    RETURN VALUE:
        unsigned int data value

    IMPORTANT NOTES:
        This function assumes that 0xffffffff means invalid. Calling function should not expect 0xffffffff as a valid value.
==================================================================================================*/
unsigned int ConfigMgr_GetDWord 
(
    CONFIG_ID_DWORD_ENUM_T        id
)
{
    unsigned int           ret = CONFIG_MGR_DWORD_INVALID;

    if( (id > CONFIG_ID_DWORD_BEGIN) && (id < CONFIG_ID_DWORD_END) )
    {
        ret = config_dword_data[ (id - CONFIG_ID_DWORD_BEGIN) ];
    }

    return ret;
}

/*================================================================================================*/
#ifdef __cplusplus
}
#endif
