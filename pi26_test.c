/**
 * @name pi26_test.c
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-12 18:32:42 leo>
 *
 * Test suite for the pi26_utils library.
 */


#include "pi26_utils.h"


int main(int argc, char *argv[])
{
        uint32_t * array;

        pi26_init_rand();
        pi26_rand_array1_u32(&array, 12);
        pi26_array1_u32_print_stdout(array, 12, "0x%08x\n");
        
        free(array);
        return 0;
}

