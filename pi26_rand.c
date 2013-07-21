/**
 * @name pi26_rand.c
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-12 18:20:17 leo>
 *
 * Utils to easily use proper (Mersenne Twister seeded with
 * /dev/urandom) randomness.
 */


#include "pi26_rand.h"


/* !SECTION! Random number generation using a Mersennes twister */
/* ============================================================ */


void pi26_init_rand()
{
        uint8_t rand_byte;
        unsigned long int i, seed = 0;
        
        FILE * dev = fopen("/dev/urandom", "r");
        for (i=0 ; i<sizeof(unsigned long) ; i++)
        {
                fscanf(dev, "%c", &rand_byte);
                seed = 0x100*seed + rand_byte;
        }
        sgenrand(seed, &PI26_M19937P_CONFIG);
        fclose(dev);
}

unsigned long int pi26_rand_uli()
{
        return genrand(&PI26_M19937P_CONFIG);
}


/* !SECTION! Generating random arrays */
/* ------------------------------------- */


void pi26_rand_array1_u8(uint8_t ** array, unsigned int size)
{
        unsigned int i;
        
        (*array) = (uint8_t*)malloc(size * sizeof(uint8_t));
        memset((*array), 0, size * sizeof(uint8_t));
        for (i=0 ; i<size ; i++)
                (*array)[i] = pi26_rand_uli();
}


void pi26_rand_array1_u16(uint16_t ** array, unsigned int size)
{
        unsigned int i;
        
        (*array) = (uint16_t*)malloc(size * sizeof(uint16_t));
        memset((*array), 0, size * sizeof(uint16_t));
        for (i=0 ; i<size ; i++)
                (*array)[i] = pi26_rand_uli();
}


void pi26_rand_array1_u32(uint32_t ** array, unsigned int size)
{
        unsigned int i;
        
        (*array) = (uint32_t*)malloc(size * sizeof(uint32_t));
        memset((*array), 0, size * sizeof(uint32_t));
        for (i=0 ; i<size ; i++)
                (*array)[i] = pi26_rand_uli();
}
