@echo off
rem ###############################################################################
rem #
rem #    FILE NAME : build.bat
rem #
rem #    GENERAL DESCRIPTION
rem #        This file is the main build batch file for GSM resource build.
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
rem #    11/26/2002   Stanley Park     cr20299     Initial Creation
rem #    02/26/2003   Stanley Park     crxxxxx     Revise for OPUS2
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

rem set TARGET=%1

rem ###############################################################################
rem #    branch by first argument of batch 
rem #   - no input : goto branch for showing product 
rem #   - 1...6    : goto make resource data
rem ###############################################################################
set SEL_PROD_NUM=%1

IF "%SEL_PROD_NUM%"=="" goto message
goto make_cfg

:message
@echo on
@echo 1. default hermes
@echo 2. default chanel
@echo 3. default topaz
@echo 4. hermes kejian
@echo 5. chanel NEC
@echo 6. hermes DPC
@echo 7. hermes HYELCD
@echo 8. hermes refresh1 DAXIAN
@echo 9. hermes refresh1 GEO
@echo 10. obelisk CECT
@echo 11. hermes refresh2 TOP
@echo off
goto end

:make_cfg
@echo on
@echo #####################################################################
@echo #
@echo #   Config Data Build
@echo #
@echo #   Copyright (C) 2002, NEWGEN Telecom Ltd, All Rights Reserved
@echo #
@echo #####################################################################
@echo off

rem del *.o
rem del *.fsh

del /q .\obj\.

rem first build objects
nmake2

del config.bin

rem then link
nmake2 cfg


@echo on
@echo #####################################################################
@echo #
@echo #   End of Config Data Build
@echo #
@echo #####################################################################
@echo off

:end

rem END OF BUILD FILE....
