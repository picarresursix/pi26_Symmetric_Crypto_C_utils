/**
 * @name pi26_test.c
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-21 22:28:15 leo>
 *
 * Test suite for the pi26_utils library.
 */


#include "../include/pi26_utils.h"


int main(int argc, char *argv[])
{
        uint8_t i, x;

        pi26_init_rand();
        for (i=0 ; i<35 ; i++)
        {
                x = PI26B_ROT_RIGHT(i, 2);
                x = PI26B_SET_NTH_LR(x, 3, 1);
                x = PI26B_SET_NTH_LR(x, 2, 0);
                pi26B_print_bin_u8(x, 8);
                puts("");
        }

        
        return 0;
}

