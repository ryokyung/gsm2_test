###############################################################################
#
#    FILE NAME : objects.mak
#
#    GENERAL DESCRIPTION
#        This file contains list of objects that must be compiled
#        and linked to the final output files.
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

all : $(TARGET).$(EXETYPE)

#==============================================================================
#    Archiver / Library files
#==============================================================================

MAIN_OBJS = $(MAIN_VOB)\$(MAIN_LIB) \
            $(OPUS_VOB)\$(OPUS_LIB) \
            $(APPS_VOB)\$(APPS_LIB) \
            $(THDP_VOB)\$(THDP_LIB)

MAIN_LIBS = $(ENGINE_VOB)\library\base.lib \
            $(ENGINE_VOB)\library\rtxclib.16l \

THIRDPARTY_LIBS = $(THDP_VOB)\ezi\lib\zi8clib_ads12.lib \
                  $(THDP_VOB)\ngi\lib\ngi_dec.lib \
                  $(THDP_VOB)\iniche\lib\lswap.o \
                  $(THDP_VOB)\iniche\lib\cksum.o

#==============================================================================
#    Image file target
#==============================================================================
              
# The target image file is produced by the linker in the selected image format,
# and then a hex file is created from the target image file.
              
# Image file  
$(TARGET).$(EXETYPE) : $(MAIN_OBJS)
        @echo ---------------------------------------------------------------
        @echo OBJECT $(@F)
        $(LD) $(LFLAGS) $(MAIN_OBJS) $(VIA_SAMPLE) $(MAIN_LIBS) $(THIRDPARTY_LIBS)
		$(BINTOOL) -c $(TARGET).$(EXETYPE) -bin -output $(TARGET).binary
        @echo ---------------------------------------------------------------    
elf :
        @echo OBJECT $(@F)
        $(LD) $(LFLAGS) $(MAIN_OBJS) $(VIA_SAMPLE) $(MAIN_LIBS) $(THIRDPARTY_LIBS)
        $(LD) $(FLFLAGS) -o IMG $(MAIN_OBJS) $(MAIN_LIBS) $(THIRDPARTY_LIBS)
        copy IMG\RESOURCE $(RESOURCE_NAME).res
        @echo ---------------------------------------------------------------    
#==============================================================================
#    End of list
#==============================================================================
