@echo off
rem ###############################################################################
rem #
rem #    FILE NAME : clean.bat
rem #
rem #    GENERAL DESCRIPTION
rem #        This file is to remove all the object, archive file for clean build.
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
rem #    07/27/2002   Stanley Park     crxxxxx     Initial Creation
rem #    02/26/2003   Stanley Park     crxxxxx     Revise for OPUS2
rem #    09/23/2003   Stanley Park     crxxxxx     Revise for single VOB migration
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

@echo on
@echo #####################################################################
@echo #
@echo #   Clean-up all objects and Archive files
@echo #
@echo #   Product Name : GSM Phase 2
@echo #
@echo #   Copyright (C) 2003, NEWGEN Telecom Ltd, All Rights Reserved
@echo #
@echo #####################################################################
@echo off

@echo on
@echo   Removing MAIN...
@echo off
rem < vob-main >
cd ..\obj
del *.o
cd ..\config
del *.o
cd ..
del main.a

@echo on
@echo   Removing OPUS - Application Manager
@echo off
cd ..\opus
cd am\obj
del *.o

@echo on
@echo   Removing OPUS - Display System
@echo off
cd ..\..
cd gds\obj
del *.o

@echo on
@echo   Removing OPUS - Resource Manager
@echo off
cd ..\..
cd rm\obj
del *.o

@echo on
@echo   Removing OPUS - Service Providers
@echo off
cd ..\..
cd sp\obj
del *.o

@echo on
@echo   Removing OPUS - Hardware Drivers
@echo off
cd ..\..
cd hwi\obj
del *.o

@echo on
@echo   Removing OPUS - Obsolute File System
@echo off
cd ..\..
cd fs\obj
del *.o

@echo on
@echo   Removing OPUS - File System
@echo off
cd ..\..
cd ofs\obj
del *.o

@echo on
@echo   Removing OPUS - Adaptor
@echo off
cd ..\..
cd adaptor\obj
del *.o

@echo on
@echo   Removing OPUS - PL
@echo off
cd ..\..
cd pl\obj
del *.o

@echo on
@echo   Removing OPUS
@echo off
cd ..\..
del opus.a


rem ###
rem ### Move to APPs
rem ###
@echo on
@echo   Removing OPUS - applications
@echo off
cd ..
cd apps\obj
del *.o
cd ..
del apps.a

rem ###
rem ### Move to Thirdparty VOB
rem ###

cd ..
cd thirdparty

@echo on
@echo   Removing OPUS - Obigo
@echo off
cd obigo\obj
del *.o

@echo on
@echo   Removing OPUS - Third EZI Engine
@echo off
cd ..\..
cd ezi\obj
del *.o

@echo on
@echo   Removing OPUS - NEO GUI(NGI) Engine
@echo off
cd ..\..
cd ngi\obj
del *.o

@echo on
@echo   Removing OPUS - Image Decoder Engine
@echo off
cd ..\..
cd imgdec\obj
del *.o

@echo on
@echo   Removing OPUS - INiche protocol stack
@echo off
cd ..\..
cd iniche\obj
del *.o

@echo on
@echo   Removing Thirdparty S/W
@echo off
cd ..\..
del thirdparty.a

@echo on
@echo #####################################################################
@echo #   All objects and archive files are deleted.
@echo #####################################################################
@echo off

rem back to build folder
cd ..\main\build

del gsmmain.map
del gsmmain.elf

rem END OF CLEAN FILE....
