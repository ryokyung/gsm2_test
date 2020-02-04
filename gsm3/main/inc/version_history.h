#ifndef VERSION_HISTORY_H
#define VERSION_HISTORY_H
/*==================================================================================================

    HEADER NAME : version_history.h

    GENERAL DESCRIPTION
        This header file contains software version information.  The history of this file
    should be the history of all software release. There must be no official as well as
    internal software releases made without updating this file.

    NEWGEN Telecom Confidential Proprietary
    (c) Copyright 2002 by NEWGEN Telecom Corp. All Rights Reserved.
====================================================================================================

    Revision History
   
    Modification                   Tracking
    Date         Author            Number     Description of changes
    ----------   --------------   ---------   ------------------------------------------------------
    03/22/2002   Stanley Park      cr10030    First creation
    08/13/2002   Stanley Park      .......    Change upon creation of Poseidon version baseline
                                              Branch name : element * .../poseidon_p2.0/LATEST
    02/27/2002   Stanley Park      crxxxxx    Revision for GSM phase 2. P2.1

    Low Level Design

    This file contains the release information string that is identical
    to the release label in ClearCase.  This header file shall be modified whenever a software build
    is released and make sure each software release has unique release IDs.
    The version history of this file should reflect the history of the all releases.
    
====================================================================================================
    INCLUDE FILES
==================================================================================================*/

/* None */

/*==================================================================================================
    CONSTANTS
==================================================================================================*/

/*
 * Software Version Convention
 *     <Program ID>_R<Major version>.<Minor version>
 *
 * <Program ID>    Refer Software Configuration Management Plan document.
 *                  e.g. P1.0, P2.0, P2.1, P3.0...etc
 * <major version>   major release ID
 * <minor version>   minor release ID (possibly build ID as well)
 *
 * If you are compiling for personal test purpose only, you are not allow to use
 * official build label for your build. Instead, use following label string that always tell you
 * it's a test load so that you are not confused with the official releases.
 *
 * Test build SW version convention
 * <Program ID>_TEST"
 * Do not modify the label string unless you're the release monkey today.
 */

#define RELEASE_LABEL_STRING           "P2.1_R01.34T1"

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

/* None */

/*================================================================================================*/
#endif  /* VERSION_HISTORY_H */
