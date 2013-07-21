/**
 * @name pi26_rand.h
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-12 18:23:17 leo>
 *
 * Utils to easily use proper (Mersenne Twister seeded with
 * /dev/urandom) randomness.
 */

#ifndef _PI26_RAND_H_
#define _PI26_RAND_H_

#include "pi26_utils.h"
#include "mt19937p.h"


/* !SECTION! Random number generation using a Mersennes twister */
/* ============================================================ */

/**
 * A global variable to store the current state of the Mersenne
 * Twister.
 */
struct mt19937p PI26_M19937P_CONFIG ;

/**
 * Initializes a Mersenne Twister using entropy from /dev/random.
 */
void pi26_init_rand();

/**
 * Returns a pseudo-random unsigned long int from a Mersenne Twister
 * (namely mt19937).
 */
unsigned long int pi26_rand_uli();


/* !SECTION! Generating random arrays */
/* ===================================== */

/**
 * Generate an array of uint8_t of the specified size. It is expected
 * that the Mersenne Twister has been initialized, i.e. that the
 * function pi26_init_rand() has already been called.
 */
void pi26_rand_array1_u8(uint8_t ** array, unsigned int size);

/**
 * Generate an array of uint16_t of the specified size. It is expected
 * that the Mersenne Twister has been initialized, i.e. that the
 * function pi26_init_rand() has already been called.
 */

void pi26_rand_array1_u16(uint16_t ** array, unsigned int size);

/**
 * Generate an array of uint32_t of the specified size. It is expected
 * that the Mersenne Twister has been initialized, i.e. that the
 * function pi26_init_rand() has already been called.
 */
void pi26_rand_array1_u32(uint32_t ** array, unsigned int size);

/**
 * Generate an array of uint64_t of the specified size. It is expected
 * that the Mersenne Twister has been initialized, i.e. that the
 * function pi26_init_rand() has already been called.
 */
void pi26_rand_array1_u64(uint64_t ** array, unsigned int size);


#endif /* _PI26_RAND_H_ */
