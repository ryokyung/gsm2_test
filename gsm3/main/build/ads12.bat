@echo off
REM ======================================================
rem
rem Root of ARM251, GNUWIN32, and Perl
rem

set MAKEMODE=unix
set ROOT_DRIVE=c:
set APPS_DIR=apps
set ADS_DIR=Program Files/ARM
set APPS_PATH=%ROOT_DRIVE%/%APPS_DIR%
set ADS_PATH=%ROOT_DRIVE%/%ADS_DIR%
set CYGNUS=gnuwin32
set CYGREL=b18
set CCASE_DIR=%ROOT_DRIVE%/Program Files/Rational/ClearCase

set ARMROOT=%ADS_PATH%/ADSv1_2
set GNUROOT=%APPS_PATH%/%CYGNUS%/%CYGREL%
set PERLROOT=%APPS_PATH%/perl
set UTILROOT=%ROOT_DRIVE%/util

rem
rem ARM Include and Path Variables
rem
set ARMLIB=%ARMROOT%/lib
set ARMINCLUDE=%ARMROOT%/include
set ARMINC=%ARMROOT%/include

rem
rem Path for ARM250, GNUWIN32, Perl tools
rem
set path=%ROOT_DRIVE%/bin;%APPS_PATH%/bin;%ROOT_DRIVE%/WINNT/system32;%ROOT_DRIVE%/WINNT;%ROOT_DRIVE%WINNT/System32/Wbem;%GNUROOT%/H-i386-cygwin32/bin
set path=%ARMROOT%/bin;%path%
set path=%path%;%PERLROOT%/bin
set path=%path%;%GNUROOT%/tcl/bin
set path=%path%;%UTILROOT%
set path=%path%;%UTILROOT%/gnu/bin
set path=%path%;%CCASE_DIR%/bin
REM ======================================================




