/**
 * @name pi26_bits.c
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-21 21:55:07 leo>
 *
 * Functions for fiddling with bits.
 */

#include "../include/pi26_utils.h"

#define PI26B_PRINT_BIN(X, L) unsigned int pi26B_print_counter; \
        for (pi26B_print_counter=0 ; pi26B_print_counter<L ; pi26B_print_counter++) \
                { printf("%1d", PI26B_NTH_LR(X, pi26B_print_counter)); } \

void pi26B_print_bin_u8(uint8_t x, unsigned int length)
{
        PI26B_PRINT_BIN(x, length)
}

void pi26B_print_bin_u16(uint16_t x, unsigned int length)
{
        PI26B_PRINT_BIN(x, length)
}

void pi26B_print_bin_u32(uint32_t x, unsigned int length)
{
        PI26B_PRINT_BIN(x, length)
}
