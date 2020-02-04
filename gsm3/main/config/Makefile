###############################################################################
#
#    FILE NAME : Makefile
#
#    GENERAL DESCRIPTION
#        Config data makefile
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
#    11/06/2002   Stanley Park     cr20195     Initial Creation
#
#    PARAMETERS
#    This makefile invoke by nmake2 command which is in build.bat
#
###############################################################################
#==============================================================================
# Porting Source to VOB
#
# New Variables for splitted makefile
# Current folder is /main/config
#==============================================================================

GSM2_VOB    = ..\..
MAIN_VOB    = $(GSM2_VOB)\main
BUILD_VOB   = $(MAIN_VOB)\build


!INCLUDE $(BUILD_VOB)\build.mak
INC      = -I. -I.\inc
INC_MAIN = -I$(MAIN_VOB)\inc

CFGLOADER   = -scatter $(CFG_SCLFILE)

CFLAGS = $(CFLAGS0) $(APCS) $(NGT_PRODUCT_TYPE) $(INCVIA) $(CVIA)

!INCLUDE .\objects.mak
!INCLUDE .\rules.mak
