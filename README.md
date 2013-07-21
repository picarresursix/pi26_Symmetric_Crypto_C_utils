π²/6 SC-C utils
===============

Some functions intended to be useful when working on *S*ymmetric
*C*ryptography in *C* language.

Install
-------

It works on Linux (ubuntu 13.04 and 12.04) and should work on Mac
OS. However, the use of `/dev/urandom` to seed a PRNG is hard coded, so
there is little chance for it work on windows. Just retrieve the
content of this repository and then run the following commands.

    make
    sudo make install

It needs the following:

	<stdio.h> 
	<string.h>
	<stdlib.h>
	<stdint.h>
	<math.h>  
	<time.h>  
	<unistd.h>
    
which are pretty standard, so you shouldn't need to install anything.


Usage
-----

Once installed, simply add `#include <pi26_SCC_utils>` in your code
file and `-lpi_26_SCC` to your compilation command. For instance, the
following program will print five 2-bytes pseudo-random numbers on
stdout.

    #include <pi26_SCC_utils.h>
    
    int main()
    {
        uint16_t * array;
        pi26_init_rand();
        pi26_rand_array1_u16(&array, 5);
        pi26_array1_u16_print_stdout(array, 5, "0x%04x\n");

        return 0;
    }
    
You can compile it using the following line.

    gcc -lpi_26_SCC your_file -o pi26_test

It should output something like the following --- except the values
won't be the same of course.

    0x8408
    0x6d2e
    0x0f84
    0x8d3b
    0x43a2


Functions provided
------------------

Functions and macros are provided to easily:
+ Use proper random number generation using a Mersennes twister.
+ Easily read/write arrays of dynamic size from stdin/to stdout.
+ Fiddle with bits (access a specific one, etc).

Copyright
---------

This software is released under a BSD licence except for the Mersennes
Twister: this is code I'm borrowing and which was released under GPL
(I might change this module soon).

