@echo off
rem ###############################################################################
rem #
rem #    FILE NAME : build.bat
rem #
rem #    GENERAL DESCRIPTION
rem #        This file is the main build batch file for software run time configuration file.
rem #
rem #    NEWGEN Telecom Confidential Proprietary
rem #    (c) Copyright 2002 by NEWGEN Telecom Corp. All Rights Reserved.
rem #    Reverse engineering is prohibited.
rem #    The copyright notice does not imply publication.
rem #
rem #
rem #    Revision History
rem #
rem #    Modification                  Tracking
rem #    Date         Author           Number      Description of changes
rem #    ----------   --------------   ---------   --------------------------------
rem #    11/06/2002   Stanley Park     cr20195     Change path, engine build
rem #
rem #
rem #    Self-documenting Code
rem #    Describe/explain low-level design, especially things in header files,
rem #    of this module and/or group of funtions and/or specific funtion
rem #    that are hard to understand by reading code
rem #    and thus requires detail description.
rem #
rem #    PARAMETERS
rem #
rem #    Describe and show examples of command line parameters
rem #
rem ###############################################################################

set PRODUCT_NAME=gsmmain
set VOB_GSM=gsm2
set VOB_CNXT=cnxt
set VOB_THDP=thirdparty
set VOB_BUILD=build
set BUILD_LOG=compile_out.log
set CONFIG_DATA=config
set RESOURCE_NAME=resource

del compile_out.log


@echo on
@echo #####################################################################
@echo #
@echo #   Config Data Build
@echo #
@echo #   Copyright (C) 2002, NEWGEN Telecom Ltd, All Rights Reserved
@echo #
@echo #####################################################################
@echo off

nmake2 -x compile_out.log

notepad compile_out.log

rem END OF BUILD FILE....
