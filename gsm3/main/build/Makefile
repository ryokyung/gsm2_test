###############################################################################
#
#    FILE NAME : Makefile
#
#    GENERAL DESCRIPTION
#        Top level make file under GSM main build folder.
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
# Current folder is /gsm2/main/build
#==============================================================================

GSM2_VOB    = ..\..
MAIN_VOB    = $(GSM2_VOB)\main
BUILD_VOB   = $(MAIN_VOB)\build

!INCLUDE $(BUILD_VOB)\build.mak

#==============================================================================
# Linker options
#==============================================================================

#LFLAGS = -Symbols -map -Info Sizes -list $(APPNAME).map -o $(APPNAME).elf -scatter scat2_ads.mem
#-via obj.opt -via idsplib.opt 

# fromelf -bin -output $(APPNAME).bin $(APPNAME).elf 

OUTPUT     = -o $(TARGET).elf
SYM        = -Symbols
MAP  	   = -map                             # Memory map of all object file areas
INFO 	   = -info sizes			   # Info on object size
LIST 	   = -list $(TARGET).map              # Direct map and info output to file
LOADER 	   = -scatter $(SCLFILE)              # Use scatter load description file

VIA_SAMPLE = -via $(SCRIPT_DIR)\sample_obj.opt

LBIN       = -o $(TARGET).bin
LELF       = -o $(TARGET)

LFLAGS     = $(SYM) $(MAP) $(INFO) $(LIST) $(OUTPUT) $(LOADER)
FLFLAGS    = $(SYM) $(MAP) $(INFO) $(LIST) $(OUTPUT) $(LOADER)

#==============================================================================
# Test target
#==============================================================================


# The flags and symbol definitions for the compiler, assembler and linker are
# listed for makefile test purposes.

test :
        @echo ------------------------------------------------------------------
        @echo CFLAGS : $(CFLAGS)
        @echo ------------------------------------------------------------------
        @echo LFLAGS : $(LFLAGS)
        @echo ------------------------------------------------------------------
        @echo LIBS : $(LIBS)
        @echo ------------------------------------------------------------------
        @echo Target : $(TARGET).$(EXETYPE)
        @echo ------------------------------------------------------------------

#==============================================================================
# Tools target
#==============================================================================

# The tool versions are listed.
tools :
        @echo ------------------------------------------------------------------
        @echo $(ARM_VERSION_BANNER)
        @$(CC)    $(VER_FLAG)
        @$(LD)    $(VER_FLAG)
        @echo ------------------------------------------------------------------

#==============================================================================
# DEFAULT SUFFIX RULES
#==============================================================================
# The following are the default suffix rules used to compile all objects that
# are not specifically included in one of the module specific rules defined
# in the next section.

SRC_FILE = $(SRCDIR)\$(@F:.o=.c)           # Input source file specification
OBJ_FILE = $(OBJ_CMD) $(OBJDIR)\$(@F)      # Output object file specification

#==============================================================================
# C code inference rules
#==============================================================================

{$(OBJDIR)}.c{$(OBJDIR)}.o:
        @echo ------------------------------------------------------------------
        @echo OBJECT $(@F)
        $(CC) $(CFLAGS) $(OBJ_FILE) $<
        @echo ------------------------------------------------------------------

.c{$(OBJDIR)}.o: 
        @echo ------------------------------------------------------------------
        @echo OBJECT $(@F)
        $(CC) $(CFLAGS) $(OBJ_FILE) $(SRC_FILE)
        @echo ------------------------------------------------------------------

!INCLUDE .\objects.mak
