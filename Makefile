# Time-stamp: <2013-07-21 22:10:28 leo>
# AUTHOR: Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>


#!SECTION! Parameters of the compilation 
#=======================================

DEBUG=no
CC=gcc
ifeq ($(DEBUG),yes)
	export CFLAGS=-Wall -Werror -pedantic -Wunreachable-code -g -O4
else
	export CFLAGS=-Wall -Werror -pedantic -Wunreachable-code -O4
endif


#!SECTION! Targets
#=================

PI26_LIB=lib/libpi26_SCC_utils.a

all: $(PI26_LIB) pi26_test

install: $(PI26_LIB)
	sudo cp include/*.h /usr/include/
	sudo cp $(PI26_LIB) /usr/lib/


#!SECTION! Rules
#=============== 

#!SUBSECTION! Compiling the different files

lib/%.o: src/%.c
	$(CC) -o $@ -c $< $(CFLAGS)

lib/mt19937p.o: src/mt19937p.c
lib/pi26_rand.o: src/pi26_rand.c
lib/pi26_array.o: src/pi26_array.c
lib/pi26_bits.o: src/pi26_bits.c
lib/pi26_test.o: src/pi26_test.c


#!SUBSECTION! Compiling the main targets

$(PI26_LIB): lib/pi26_rand.o lib/pi26_array.o lib/pi26_bits.o lib/mt19937p.o
	ar cq $@ $^

pi26_test: $(PI26_LIB) lib/pi26_test.o
	$(CC)  lib/pi26_test.o -L./lib -lpi26_SCC_utils -o $@

