###############################################################################
#
#    FILE NAME : objects.mak
#
#    GENERAL DESCRIPTION
#        This file contains list of objects that must be compiled and linked to the final output files.
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

#==============================================================================
#    List of objects
#==============================================================================

VERSION_OBJS = .\obj\version.o \
               .\obj\config_manager.o

MAIN_COMPS = .\obj\*.o \
	.\config\$(OBJDIR)\*.o

#==============================================================================
#    End of list
#==============================================================================
