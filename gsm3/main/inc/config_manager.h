#ifndef CONFIG_MANAGER_H
#define CONFIG_MANAGER_H
/*==================================================================================================

    HEADER NAME : config_manager.h

    GENERAL DESCRIPTION
        Config manager main header file

    NEWGEN Telecom Confidential Proprietary
    (c) Copyright 2002 by NEWGEN Telecom Corp. All Rights Reserved.
====================================================================================================

    Revision History
   
    Modification                  Tracking
    Date         Author           Number      Description of changes
    ----------   --------------   ---------   ------------------------------------------------------
    11/02/2002   Stanley Park     cr20195     Initial Creation

    Self-documenting Code
    Describe/explain low-level design, especially things in header files, of this module and/or
    group of funtions and/or specific funtion that are hard to understand by reading code
    and thus requires detail description.
    Free format !

====================================================================================================
    INCLUDE FILES
==================================================================================================*/
#include "config_table.h"

/*==================================================================================================
    CONSTANTS
==================================================================================================*/
/*
 * Do not change following magic number.
 */
#define CONFIG_DATA_BYTE_MAGIC         0xA1
#define CONFIG_DATA_WORD_MAGIC         0xA5A2
#define CONFIG_DATA_DWORD_MAGIC        0xA5A5A5A4

/*
 * byte, word, dword config data
 */
#define CONFIG_MGR_FLAG_ON             0x01
#define CONFIG_MGR_FLAG_OFF            0x00
#define CONFIG_MGR_FLAG_INVALID        0xFF

#define CONFIG_MGR_WORD_INVALID        0xFFFF

#define CONFIG_MGR_DWORD_INVALID       0xFFFFFFFF

/*==================================================================================================
    MACROS
==================================================================================================*/

/*==================================================================================================
    ENUMERATIONS
==================================================================================================*/

/*==================================================================================================
    DATA STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
    GLOBAL VARIABLES DECLARATIONS
==================================================================================================*/

/*==================================================================================================
    FUNCTION PROTOTYPES
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
extern void ConfigMgr_Init ( void );

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
extern const char *ConfigMgr_GetVersion ( void );

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
extern unsigned short ConfigMgr_GetModelId ( void );

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
extern char * ConfigMgr_GetManufact
(
    char *dest_buffer
);
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
extern char * ConfigMgr_GetModel
(
    char *dest_buffer
);
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
extern unsigned char ConfigMgr_GetByte 
(
    CONFIG_ID_ENUM_T         id
);

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
extern unsigned short ConfigMgr_GetWord
(
    CONFIG_ID_WORD_ENUM_T        id
);

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
extern unsigned int ConfigMgr_GetDWord 
(
    CONFIG_ID_DWORD_ENUM_T        id
);

/*================================================================================================*/
#endif /* end of CONFIG_MANAGER_H */
