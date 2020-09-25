#
# Title:makefile
#
# Description:
#   Build the cyclops player executable
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
BINDIR = $(BASEDIR)/bin
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
# Executablees.
#
PLAYER = $(BINDIR)/player

#
# Object Files.
#
OBJS = main.o 

#
# Finally, some work...
#
all: $(PLAYER)

include depend.include

$(PLAYER): $(OBJS) $(LIBRARY)
	$(CC) -o $@ $(OBJS) $(LIBRARY) -luuid

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
	-@rm -f *~ *.d TAGS depend.include $(PLAYER)
	-@touch depend.include
