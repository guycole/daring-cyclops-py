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
PROJ1LIB = $(LIBDIR)/libproj1.a
PROJ2LIB = $(LIBDIR)/libproj2.a

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
CYCLOPS = cyclops

#
# Object Files.
#
OBJS = file1.o file2.o file3.o

#
# Finally, some work...
#
all: $(CYCLOPS)

include depend.include

$(TEST1): test1.o $(PROJ1LIB) $(PROJ2LIB)
	$(CC) -o $@ test1.o $(PROJ1LIB) $(PROJ2LIB)

$(PROJ1LIB):
	$(MAKE) -C project1 $@

$(PROJ2LIB):
	$(MAKE) -C project2 $@

#
#  Update the TAGS file.
#
.PHONY: tags
tags:
	-@etags *.cc

#
#  Determine the size of source files in this subdirectory.
#
.PHONY: size
size:
	-@echo "Size: `pwd`"
	-@wc -l *.cc makefile

#
#  Generate dependency file
#
.PHONY: depend
depend:
	-@rm ./depend.include
	$(CC) $(DEPEND_FLAG) $(CPPFLAGS) *.cc > ./depend.include

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
	-@rm -f lib/*.a
	-@rm -f *~ TAGS depend.include $(TEST1)
	-@touch depend.include
