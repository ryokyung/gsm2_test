###############################################################################
#
#    FILE NAME : build.mak
#
#    GENERAL DESCRIPTION
#        This file contains common definition and options that are used
#        for all other makefiles.
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
#    02/26/2003   Stanley Park     crxxxxx     Revise for OPUS2
#    09/25/2003   Stanley Park     crxxxxx     Revise for single VOB migration
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
#    Archiver / Library files
#==============================================================================

CONEXANT_SFFS_SYSTEM = SFFS_NOFLASHAPI

#==============================================================================
# Include file path has been moved to script\include.opt file
# to avoid too long compile option displayed on the compile command line.
#
# MAKE SURE EDIT include.opt file to add/modify/delete include path
#==============================================================================

# MAIN_VOB    = $(GSM2_VOB)\main
APPS_VOB     = $(GSM2_VOB)\apps
OPUS_VOB     = $(GSM2_VOB)\opus
ENGINE_VOB   = $(GSM2_VOB)\cnxt
THDP_VOB     = $(GSM2_VOB)\thirdparty

PRODUCT_ROOT = $(MAIN_VOB)\build

#==============================================================================
# Target file name and type definitions
#==============================================================================

TARGET     = $(PRODUCT_NAME)
TARGETDIR  = $(TARGET)             # Name for object directory
MAKEFILE   = Makefile              # Name of this make file (without extension)
SRCDIR     = src
INCDIR	   = inc
OBJDIR	   = obj
LIBDIR	   = lib

SCRIPT_DIR = $(PRODUCT_ROOT)\script

#==============================================================================
# Archiver File List and Lib Name
#==============================================================================

MAIN_LIB   = main.a

APPS_LIB   = apps.a

OPUS_LIB   = opus.a
AM_LIB 	   = am.a
GDS_LIB	   = gds.a
RM_LIB	   = rm.a
SP_LIB	   = sp.a
HWI_LIB	   = hwi.a
OFS_LIB    = ofs.a
ADAPTOR_LIB= adaptor.a
PL_LIB     = pl.a

THDP_LIB   = thirdparty.a
OBIGO_LIB  = obigo.a
EZI_LIB    = ezi.a
NGI_LIB    = ngi.a
IMGDEC_LIB = imgdec.a
INICHE_LIB = iniche.a

#==============================================================================
# Build process output type
#==============================================================================

EXETYPE    = elf                # Target image file format
CC         = tcc                # ARM SDT Thumb 16-bit inst. set ANSI C compiler
LD         = armlink            # ARM SDT linker
AR	       = armar              # ARM SDT librian
BINTOOL	   = fromelf
OBJ_CMD    = -o                 # Command line option to specify output filename
ERRLOG     = errorlog.exe       # Tool extracting only warning, error, and
SCRIPT_DIR = $(PRODUCT_ROOT)\script
SCLFILE	   = $(SCRIPT_DIR)\gsmmain.scl
RES_SCLFILE= $(SCRIPT_DIR)\resource.scl
CFG_SCLFILE = $(SCRIPT_DIR)\config.scl
#==============================================================================
# Compiler Options
#
# [PCS-options]
# -apcs /interwork   This option generate code with ARM/Thumb interworking support.
#
# [source-language]
# -ansi, -ansic, -cpp, -embeddedcplusplus -strict
#
# [search-paths]
# -fk          This option uses Kernighan and Ritchie search rules for locating included files.
#              The curent place is defined by the original source file and is not stacked.
#              Without this option, Berkeley-style searching is used.
# -Idir-name   -I Adds the specified directory to the list of places
#              that are searched for include file
# -fd          This otions makes the handling of quoted include files
#              the same as angle-bracketed included files.
#              Specifically, the current place is excluded from the search path.
# -jdir-list   -j to search the in-memory file system.
# 
# [preprocessor-options]
# -E           This options executes only the preprocessor phase of the compiler.
# -C           This option retains comments in preprocessor output when used in conjunction with -E
# -Dsymbol=value   This option defines symbol as a preprocessor macro.
# -Dsymbol     This option defines symbol as a preprocessor macro.
# -M           This option executes only the preprocessor phase of the compiler, as with -E.
# -Usymbol     This option undefines symbol.
#
# [output-format]
# -c           This option compiles but does not preform the link step. The compiler compiles
# -list        This option creates a listing file consisting of lines of source interleaved with error
#              and warning messages. The options -fi, -fj and -fu can be used to control
# -fi          list the lines from any files included with directives of the form #include "file"
# -fj          list the lines from any files included with directives of the form #include <file>
# -fu          list source that was not preprocessed.
# -o file      This options names the file that holds the final output of the compilation.
# -MD          This option compiles the source and writes makefile dependency lines to file inputfilename.d.
# -depend filename   same as -MD, but write makefile dependency lines to the specified file
# -S           This option writes a listing of the accembly language generated by the compiler to a file.
#              No object code is generted.
# -fs          this option, when used with -S, interleaves C or C++ source code line.
#
# [target-options]
# -cpu name    This option generates code for a specific ARM processor or architecture.
# -fpu name    This options selects the trarget Floating-Point Unit(FPU) architecture.
#
# [debug-options]
# -g [options] This option switches on the generation of debug tables for the current compilation.
#              Debug table options are as specified by -gt.
# -g+          This is a synonym for -g.
#              It is generated by graphical configurers (the CodeWarrior IDE for example)
# -g-          This option switches off the generation of debug tables for the current compilation.
#              This is default
# -gt[p]       This option, when used with -g, switches off the generation of debug table entries
#              for preprocessor macro definition
# -dwarf2      This options specifies DWARF2 debug table format. This is the default,
#              and is the only available debug table format.
#
# [code-generation-options]
# -Onumber     This option specifies the level of optimization to be used. The optimization levels are
#              -O0    Turns off all optimization, except some simple source transformations.
#                     This is the default level.
#              -O1    Turns off optimizations that seriously degrade the debug view.
#              -O2    Generates fully optimized code. If used with -g,
#                     the debug view might be less satisfactory because
#                     the mapping of object code to source code is not always clear.
# -Ospace      This option optimizes to reduce image size at the expense of a possible increase
#              in execution time.
#              For example, large structure copies are done by out-of-line function calls
#              instead of inline code.
#              Use this option if code size is more critical than performance. This is the default
# -Otime       This option optimizes to reduce execution time at the possible expense of a larger image.
# -Ono_inline  Disables inilining. Calls to inline functions are not expanded inline.
# -Oinline     Enables the compiler to expand inline functions instead of placing them
#              in a common code section.
# -Ono_autoinline  This option disables automatic inlining.
# ....see ARM documents for more options
#
# [code and data section]
# -zo          This option generates one ELF section for each function in source file.
#              This option enables the linker to remove unused functions
#              when the default -remove linker option is active.
#
# [Setting byte order]
# -littleend   Generates code for an ARM processor using little-endian memory
# -bigend      Generates code for an ARM proecesor using big-endian memory.
#
# [Setting Alignment options]
# -zasNumber   This options specifies the minimum byte alignment for structure.
#              Valid values for Number are: 1,2,4,8
#
# [implementation details]
# -fy          This option forces all enumerations to be stored in integers.
#              This option is switched off by default
#              and the smallest data type is used that can hold the values of all enumerators.
# -zc          this option makes the char type to be signed. It is normally unsigned in C++ and ANSI C mode
#
# [warning-options]
# -W           This option suppresses all warnings.
# See ARM documents for more detail options
#
# [additional-checks]
# -fa          Checks for certain types of data flow anomalies. The checks indicate when an automatic variable
#              might have been used before being assigned a value.
# -fh          This option checks that:
#              all external objects are declared before use
#              all file-scoped static objects are used
#              all predeclarations of static functions are used between their declaration and their definition.
# -fp          reports on explicit casts of integers to pointers
# -fv          this option reports on all unused declarations (including from standard headers)
# -fx          Enables all warnings normally suppressed by default, with the exception of the additional checks
#
# [error-options]
# -E[option][+][options]
#
#==============================================================================
CFLAGS0 = -c -g+ -O1
APCS    = -apcs /interwork -Wa

!IFDEF CONEXANT_SFFS_SYSTEM
CVIA    = -via $(SCRIPT_DIR)\armcomp.opt
INCVIA  = -via $(SCRIPT_DIR)\include.opt
!ELSE
CVIA    = -via $(SCRIPT_DIR)\armcomp_efs.opt
INVVIA  = -via $(SCRIPT_DIR)\include_efs.opt
!ENDIF

!IFDEF OPUS_DEBUG
!IF $(OPUS_DEBUG) == 1
OPUS_DEBUG_TYPE = -DENABLE_OPUS_DEBUG
!ELSE
OPUS_DEBUG_TYPE = -DOPUS_DEBUG_DISABLED
!ENDIF
!ENDIF

CFLAGS  = $(CFLAGS0) $(APCS) $(INCVIA) $(CVIA) $(OPUS_DEBUG_TYPE)

#==============================================================================
#  Archiver options
#==============================================================================
ARFLAGS = -create

#==============================================================================
# Tools target definitions (used to echo tool information)
#==============================================================================

ARM_VERSION_BANNER = ADS 1.2 TOOLS
VER_FLAG = -vsn

!INCLUDE $(SCRIPT_DIR)\product.opt

#==============================================================================
#    End of list
#==============================================================================

