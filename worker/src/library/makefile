#
# Title:makefile
#
# Description:
#   Build the cyclops library.
#
#   'make size' returns the quantity of lines in this directory
#   'make clean' removes all core and object files
#   'make ultraclean' removes all executables
#
# Operating System/Environment:
#   Ubuntu 18.04.3 LTS (Bionic Beaver)
#   GNU Make 4.1
#
# Author:
#   G.S. Cole (guycole at gmail dot com)
#

#
# Directories.
#
BASEDIR = $(HOME)/daring-cyclops/worker
INCDIR = $(BASEDIR)/include
LIBDIR = $(BASEDIR)/lib

#
# Header Files.
#

#
# Libraries.
#
LIBRARY = $(LIBDIR)/libcyclops.a

#
# Configurations.
#
ARFLAGS = -r
CMACS  = -DTRACE=1
CFLAGS = -g -Wall -I$(INCDIR)
DEPEND_FLAG = -MM
CPPFLAGS = -g -Wall -I. -I$(INCDIR)

#
# Tools.
#
AR = ar
CC = g++
INDENT = indent
LATEX = latex

#
# Object Files.
#
OBJS = board_cell.o board_manager.o board_token.o catalog_item.o catalog_manager.o cyclops.o error_message.o location.o mine.o planet.o player.o player_manager.o player_message.o player_message_tell.o player_message_time.o ship.o ship_manager.o stargate.o utility.o

#
# Finally, some work...
#
all: $(LIBRARY)

include depend.include

$(LIBRARY): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

#
#  Update the TAGS file.
#
.PHONY: tags
tags:
	-@etags *.cpp

#
#  Determine the size of source files in this subdirectory.
#
.PHONY: size
size:
	-@echo "Size: `pwd`"
	-@wc -l *.cpp makefile

#
#  Generate dependency file
#
.PHONY: depend
depend:
	-@rm ./depend.include
	$(CC) $(DEPEND_FLAG) $(CPPFLAGS) *.cpp > ./depend.include

#
#  Cleanup this subdirectory.
#
.PHONY: clean
clean:
	-@rm -f *.o *.BAK core

#
#  Nuke all the executables.
#
.PHONY ultraclean:
ultraclean:
	-@rm -f *~ *.d TAGS depend.include $(LIBRARY)
	-@touch depend.include
