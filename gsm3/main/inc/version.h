#ifndef VERSION_H
#define VERSION_H
/*==================================================================================================

    HEADER NAME : version.h

    GENERAL DESCRIPTION
        This header file is to externalize version manipulation funcitons in version.c.

    NEWGEN Telecom Confidential Proprietary
    (c) Copyright 2002 by NEWGEN Telecom Corp. All Rights Reserved.
====================================================================================================

    Revision History
   
    Modification                  Tracking
    Date         Author           Number      Description of changes
    ----------   --------------   ---------   ------------------------------------------------------
    03/22/2002   Stanley Park     cr10030     First creation
    09/25/2002   Stanley Park     crxxxxx     Add compile date and time functions

====================================================================================================
    INCLUDE FILES
==================================================================================================*/

/* None */

/*==================================================================================================
    CONSTANTS
==================================================================================================*/

/* None */

/*==================================================================================================
    MACROS
==================================================================================================*/

/* None */

/*==================================================================================================
    ENUMERATIONS
==================================================================================================*/

/* None */

/*==================================================================================================
    DATA STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/* None */

/*==================================================================================================
    GLOBAL VARIABLES DECLARATIONS
==================================================================================================*/

/* None */

/*==================================================================================================
    FUNCTION PROTOTYPES
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
extern unsigned int version_get_sw_ver_strlen
(
    void
);

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
extern char* version_get_sw_ver_strcpy
(
    char         *dest_buffer
);

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
extern char* version_get_sw_ver_strncpy
(
    char           *dest_buffer,
    unsigned int    lengh
);

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
extern const char* version_get_sw_compile_date ( void );

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
extern const char* version_get_sw_compile_time ( void );

/*================================================================================================*/
#endif  /* VERSION_H */
