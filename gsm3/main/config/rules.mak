###############################################################################
#
#    FILE NAME : rules.mak
#
#    GENERAL DESCRIPTION
#        This file contains build rules for target.
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
#    02/27/2003   Stanley Park     crxxxxx     Revise for OPUS2
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
#    Object directory target
#==============================================================================

all :  $(CFG_OBJS)

SRC_FILE = .\$(SRCDIR)\$(@F:.o=.c)          # Input source file specification
OBJ_FILE = $(OBJ_CMD) .\$(OBJDIR)\$(@F)   # Output object file specification

OUTPUT     = -o $(CONFIG_DATA).elf
CFGLOADER   = -scatter $(CFG_SCLFILE)

CFGFLAGS  = $(OUTPUT) $(CFGLOADER)

#==============================================================================
#    C code inference rules
#==============================================================================
        
$(CFG_OBJS) : $(SRC_FILE)
        @echo ------------------------------------------------------------------
        @echo OBJECT $(@F)
        $(CC) $(CFLAGS) $(OBJ_FILE) $(SRC_FILE)
        @echo ------------------------------------------------------------------
cfg :
    @echo ---------------------------------------------------------------
    $(LD) $(CFGFLAGS) $(CFG_OBJS)
    $(BINTOOL) -c $(CONFIG_DATA).elf -bin -output $(CONFIG_DATA).bin 
    @echo ---------------------------------------------------------------

#==============================================================================
#    C code inference rules
#==============================================================================        
