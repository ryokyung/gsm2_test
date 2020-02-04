@echo off
rem ###############################################################################
rem #
rem #    FILE NAME : build.bat
rem #
rem #    GENERAL DESCRIPTION
rem #        This file is the main build batch file for GSM build.
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
rem #    07/10/2002   Sean Kim         crxxxxx     Initial Creation
rem #    07/23/2002   Stanley Park     crxxxxx     Change path, engine build
rem #    02/26/2003   Stanley Park     crxxxxx     Revise for OPUS2
rem #    09/23/2003   Stanley Park     crxxxxx     Revise for single VOB migration
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

rem ###############################################################################
rem #    Set for platform controled build
rem ###############################################################################
set FIRST_ARGV=%1

IF "%FIRST_ARGV%"=="hermes" goto hermes_build
IF "%FIRST_ARGV%"=="Hermes" goto hermes_build
IF "%FIRST_ARGV%"=="HERMES" goto hermes_build
IF "%FIRST_ARGV%"=="chanel" goto chanel_build
IF "%FIRST_ARGV%"=="Chanel" goto chanel_build
IF "%FIRST_ARGV%"=="CHANEL" goto chanel_build
IF "%FIRST_ARGV%"=="topaz"  goto topaz_build
IF "%FIRST_ARGV%"=="Topaz"  goto topaz_build
IF "%FIRST_ARGV%"=="TOPAZ"  goto topaz_build

rem display the usage and exit
@echo on
@echo Copyright(c) 2003 All Rights Reserved. NEWGEN Telecom., Ltd.
@echo Correct Usage
@echo     build hermes       build for Hermes platform
@echo     build chanel       build for Chanel platform
@echo     build Topaz        build for Topaz platform
@echo off
goto build_exit

:hermes_build
@echo on
@echo #####################################################################
@echo  HERMES Platform Build Start
@echo #####################################################################
@echo off
rem 1 means  PRODUCT_TYPE_HERMES  the default config for Hermes platform
set SEL_PROD_NUM=1
goto start_build

:chanel_build
@echo on
@echo #####################################################################
@echo  CHANEL Platform Build Start
@echo #####################################################################
@echo off
rem 2 means  PRODUCT_TYPE_CHANEL  the default config for Chanel platform
set SEL_PROD_NUM=2
goto start_build

:topaz_build
@echo on
@echo #####################################################################
@echo  TOPAZ Platform Build Start
@echo #####################################################################
@echo off
rem 3 means  PRODUCT_TYPE_TOPAZ  the default config for Topaz platform
set SEL_PROD_NUM=3
goto start_build


:start_build
del *.elf
del *.bin

rem del ..\..\main\build\compile_out.log
del compile_out.log

@echo on
@echo #####################################################################
@echo #
@echo #   Main Build Batch File
@echo #
@echo #   Product Name : GSM Phase 2
@echo #
@echo #   Copyright (C) 2003, NEWGEN Telecom Ltd, All Rights Reserved
@echo #
@echo #####################################################################
@echo off

@echo on
@echo #####################################################################
@echo #   Component Build
@echo #   Component Sub-Dir : Main
@echo #####################################################################
@echo off

rem < vob-main >
cd ..
nmake2 -x temp.log
type temp.log >> build\compile_out.log
del temp.log


cd config
del obj\*.o
nmake2 -x temp.log
del temp.log
cd ..

@echo on
@echo #####################################################################
@echo #   Library Build  1/4
@echo #   Library Name : Main
@echo #####################################################################
@echo off
rem
rem delete version.o first to make sure the build contains
rem the current compile time and date information.
rem
del obj\version.o
nmake2

@echo on
@echo #####################################################################
@echo #   Component Build
@echo #   Component Sub-Dir : Opus
@echo #####################################################################
@echo off

rem # < vob-main >
cd ..
rem vob
cd opus
rem < vob-opus >

cd am
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\gds
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\rm
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\hwi
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\ofs
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\sp
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\adaptor
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\pl
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

@echo on
@echo #####################################################################
@echo #   Library Build  2/4
@echo #   Library Name : Opus
@echo #####################################################################
@echo off
cd ..
rem <vob-opus >
nmake2


@echo on
@echo #####################################################################
@echo #   Component Build
@echo #   Component Sub-Dir : apps
@echo #####################################################################
@echo off

cd ..
cd apps
nmake2 -x temp.log
type temp.log >> ..\main\build\compile_out.log
del temp.log

@echo on
@echo #####################################################################
@echo #   Library Build  3/4
@echo #   Library Name : Application
@echo #####################################################################
@echo off
rem <vob-opus >
nmake2 arch

@echo on
@echo #####################################################################
@echo #   Component Build
@echo #   Component Sub-Dir : Third-Party
@echo #####################################################################
@echo off

cd ..\thirdparty

cd ezi
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\ngi
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\iniche
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\obigo
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log

cd ..\imgdec
nmake2 -x temp.log
type temp.log >> ..\..\main\build\compile_out.log
del temp.log


@echo on
@echo #####################################################################
@echo #   Library Build  4/4
@echo #   Library Name : Thirdparty
@echo #####################################################################
@echo off
cd ..
rem <vob thirdparty>
nmake2 all

cd ..\main\build

set FIRST_ARGV=%1

IF "%FIRST_ARGV%"=="elf" goto elf_build
goto normal_build

:elf_build
@echo on
@echo #####################################################################
@echo #
@echo #   TARGET BUILD
@echo #
@echo #   TARGET NAME : GSMMAIN.ELF / BIN / FSH
@echo #
@echo #####################################################################
@echo off

nmake2 elf

goto build_end

:normal_build
@echo on
@echo #####################################################################
@echo #
@echo #   TARGET BUILD
@echo #
@echo #   TARGET NAME : GSMMAIN.BIN / FSH
@echo #
@echo #####################################################################
@echo off

nmake2 all

:build_end
notepad compile_out.log

:build_exit
rem END OF BUILD FILE....
