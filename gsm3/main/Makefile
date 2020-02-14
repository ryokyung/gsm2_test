###############################################################################
#
#    FILE NAME : Makefile
#
#    GENERAL DESCRIPTION
#        Top level make file.
#
#    NEWGEN Telecom Confidential Proprietary
#    (c) Copyright 2002 by NEWGEN Telecom Corp. All Rights Reserved.
#    Reverse engineering is prohibited.
#    The copyright notice does not imply publication.
#
#
#    Revision History
#
#    Modification                  Tracking
#    Date         Author           Number      Description of changes
#    ----------   --------------   ---------   --------------------------------
#    07/10/2002   Sean Kim         crxxxxx     Initial Creation
#    07/23/2002   Stanley Park     crxxxxx     Change path, engine build
#    02/26/2003   Stanley Park     crxxxxx     Revise for OPUS2
#    04/11/2003   Stanley Park     crxxxxx     Revise for ADS 1.2 compiler
#    09/23/2003   Stanley Park     crxxxxx     Revise for single VOB migration
#
#
#    Self-documenting Code
#    Describe/explain low-level design, especially things in header files,
#    of this module and/or group of funtions and/or specific funtion
#    that are hard to understand by reading code
#    and thus requires detail description.
#
#    PARAMETERS
#
#    Describe and show examples of command line parameters
#
###############################################################################

#==============================================================================
# Porting Source to VOB
#
# New Variables for splitted makefile
# Current folder is /gsm2/main/
#==============================================================================

GSM2_VOB    = ..
MAIN_VOB    = $(GSM2_VOB)\main
BUILD_VOB   = $(MAIN_VOB)\build
YJ_PARAMETER = $(MAIN_VOB)

!INCLUDE $(BUILD_VOB)\build.mak
!INCLUDE .\objects.mak
!INCLUDE .\rules.mak
