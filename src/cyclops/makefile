#
# Title:makefile
#
# Description:
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
DEVDIR = $(HOME)/daring-cyclops/src/cyclops
INCDIR = $(DEVDIR)/include
LIBDIR = $(DEVDIR)/lib

#
# Header Files.
#

#
# Libraries.
#
CYCLOPS = cyclops

#
# Configurations.
#
ARFLAGS = -r
CMACS  = -DTRACE=1
CFLAGS = -g -Wall -I$(INCDIR)
DEPEND_FLAG = -MM
CPPFLAGS = -g -Wall -I$(INCDIR) 

#
# Tools.
#
AR = ar
CC = g++
INDENT = indent
LATEX = latex

#
# Executable Names.
#

#
# Object Files.
#
OBJS = cyclops.o main.o player.o player_manager.o

#
# Finally, some work...
#
all: $(CYCLOPS)

include depend.include

$(CYCLOPS): $(OBJS)
	$(CC) -o $@ $(OBJS) -luuid

cyclops.o: cyclops.cpp cyclops.h
	$(CC) -c $(CPPFLAGS) $?

main.o: main.cpp
	$(CC) -c $(CPPFLAGS) $?

player.o: player.cpp player.h
	$(CC) -c $(CPPFLAGS) $?

player_manager.o: player_manager.cpp player_manager.h
	$(CC) -c $(CPPFLAGS) $?

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
	-@rm -f *~ TAGS depend.include $(CYCLOPS)
	-@touch depend.include
