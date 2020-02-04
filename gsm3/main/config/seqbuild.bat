@echo off
rem ###############################################################################
rem #
rem #    FILE NAME : seqbuild.bat
rem #
rem #    GENERAL DESCRIPTION
rem #        This file is the batch file for building resource in sequence
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
rem #    02/12/2003   Forest Lim       cr20706     Initial Creation
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
set VOB_MAIN=main
set VOB_CNXT=cnxt
set VOB_OPUS=opus
set VOB_BUILD=build
set BUILD_LOG=compile_out.log

call cfgbuild 1
copy config.bin config_default_hermes.cfg
call cfgbuild 2
copy config.bin config_hermes_chanel.cfg
call cfgbuild 3
copy config.bin config_hermes_topaz.cfg
call cfgbuild 4
copy config.bin config_hermes_hermes_kejian.cfg
call cfgbuild 5
copy config.bin config_hermes_chanel_nec.cfg
call cfgbuild 6
copy config.bin config_hermes_dpc.cfg
call cfgbuild 7
copy config.bin config_hermes_hyelcd.cfg
call cfgbuild 8
copy config.bin config_hermes_ref1_daxian.cfg
call cfgbuild 9
copy config.bin config_hermes_ref1_geo.cfg
call cfgbuild 10
copy config.bin config_obelisk_cect.cfg
call cfgbuild 11
copy config.bin config_hermes_ref2_top.cfg

