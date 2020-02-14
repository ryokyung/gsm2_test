yjyj test
#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================

    MODULE NAME : version.c

    GENERAL DESCRIPTION
        This module contains functions that handle software version information.

    NEWGEN Telecom Confidential Proprietary
    (c) Copyright 2002 by NEWGEN Telecom Corp. All Rights Reserved.
====================================================================================================

    Revision History
   
    Modification                  Tracking
    Date         Author           Number      Description of changes
    ----------   --------------   ---------   ------------------------------------------------------
    03/22/20002  Stanley Park     cr10030     First creation
    09/25/20002  Stanley Park     crxxxxx     Add compile date and time functions


    Self-documenting Code

    Software version information shall be contained in this module and only in this module.
    Version information string will be visible within this file and external reference should be made via function call below

    void version_get_sw_ver_strlen ()
    void version_get_sw_ver_strcpy ()
    void version_get_sw_ver_strncpy ()

    Those externalized functions declared in version.h file and other module shall include version.h file to access
    version information.
    In the future, all version information including H/W, Flex..etc shall be placed here and managed here only.
            
====================================================================================================
    INCLUDE FILES
==================================================================================================*/

#include    <string.h>
#include    "version_history.h"
#include    "version.h"

/*==================================================================================================
    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/* None */

/*==================================================================================================
    LOCAL CONSTANTS
==================================================================================================*/

/* None */

/*==================================================================================================
    LOCAL TYPEDEFS - Structure, Union, Enumerations...etc
==================================================================================================*/

/* None */

/*==================================================================================================
    LOCAL MACROS
==================================================================================================*/

/* None */

/*==================================================================================================
    LOCAL VARIABLES
==================================================================================================*/
/*
 * This is the hardcoded software version strings. Declaraed as local and only be accessed by function call
 * that copies the string into buffers provide by caller
 */
static const char     sw_version_string[] = RELEASE_LABEL_STRING;

const char            sw_compile_date[] = __DATE__;
const char            sw_compile_time[] = __TIME__;

/*==================================================================================================
    GLOBAL VARIABLES
==================================================================================================*/

/* None */

/*==================================================================================================
    LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
    FUNCTION: local_function_name

    DESCRIPTION:
        Description of this specific function.

    ARGUMENTS PASSED:
        You may omit description of parameters whose name is descriptive enough to understand by reading the code without
        reading the description of arguments

    RETURN VALUE:
        You may omit description of return value if the retunr value is generally understandable by software engineers

    IMPORTANT NOTES:
        Describe anything that help understanding the function and important aspect of using the function i.e side effect..etc
==================================================================================================*/


/*==================================================================================================
    GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
    FUNCTION: version_get_sw_ver_strlen
    
    DESCRIPTION:
        This function returns the string length of the SW version string.

    ARGUMENTS PASSED:
        Void

    RETURN VALUE:
        int      string length

    IMPORTANT NOTES:
        None
==================================================================================================*/
unsigned int version_get_sw_ver_strlen
(
    void
)
{
    unsigned int      version_length;
    
    version_length = strlen( sw_version_string );
    
    return version_length;
}

/*==================================================================================================
    FUNCTION: version_get_sw_ver_strcpy

    DESCRIPTION:
        This function copies SW version string into buffer pointed by caller.

    ARGUMENTS PASSED:
        char*     buffer pointer to copy SW version string.

    RETURN VALUE:
        char*     pointer of the passed buffer pointer.

    IMPORTANT NOTES:
        This funciton only check to see if passed buffer pointer is NULL or not.
        Other sanity checks such as long enough buffer to copy...etc won't be done here
        Caller must make sure the buffer is long enough by calling version_get_sw_ver_strlen() if necessary.
==================================================================================================*/
char* version_get_sw_ver_strcpy
(
    char         *dest_buffer
)
{
    if( dest_buffer != NULL )
    {
        strcpy( dest_buffer, sw_version_string );
    }
    
    return dest_buffer;
}

/*==================================================================================================
    FUNCTION: version_get_sw_ver_strncpy

    DESCRIPTION:
        This function copies low end of SW version string into buffer by given number.

    ARGUMENTS PASSED:
        char*        buffer pointer to copy SW version string.
        unsigned int  number of characters to copy

    RETURN VALUE:
        char*        pointer of the passed buffer pointer.

    IMPORTANT NOTES:
        This funciton only check to see if passed buffer pointer is NULL or not.
        Other sanity checks such as long enough buffer to copy...etc won't be done here
        Caller must make sure the buffer is long enough by calling version_get_sw_ver_strlen() if necessary.
==================================================================================================*/
char* version_get_sw_ver_strncpy
(
    char           *dest_buffer,
    unsigned int    length
)
{
    const char     *start_position;
    unsigned int    version_length;

    version_length = strlen( sw_version_string );

    start_position = sw_version_string;
    if( length < version_length )
    {
        start_position += (version_length - length);    
    }     
    
    if( dest_buffer != NULL )
    {
        strncpy( dest_buffer, start_position, length );
    }
    
    return dest_buffer;
}

/*==================================================================================================
    FUNCTION: version_get_sw_compile_date

    DESCRIPTION:
        This function returns the string pointer of compile date.

    ARGUMENTS PASSED:
        None

    RETURN VALUE:
        const char*        pointer of the compile date string

    IMPORTANT NOTES:
        None
==================================================================================================*/
const char* version_get_sw_compile_date ( void )
{
	return &sw_compile_date[0];
}

/*==================================================================================================
    FUNCTION: version_get_sw_compile_time

    DESCRIPTION:
        This function returns the string pointer of compile time.

    ARGUMENTS PASSED:
        None

    RETURN VALUE:
        const char*        pointer of the compile time string

    IMPORTANT NOTES:
        None
==================================================================================================*/
const char* version_get_sw_compile_time ( void )
{
	return &sw_compile_time[0];
}

/*================================================================================================*/

#ifdef __cplusplus
}
#endif
