/**
 * @name pi26_bits.h
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-21 22:21:57 leo>
 *
 * Functions for fiddling with bits.
 */

#ifndef _PI26_BITS_H_
#define _PI26_BITS_H_

/** Rotates the bits of X by N towards the left */
#define PI26B_ROT_LEFT(X, N) (((X) << (N)) | ((X) >> (8*sizeof(X) - (N))))

/** Rotates the bits of X by N towards the right */
#define PI26B_ROT_RIGHT(X, N) (((X) >> (N)) | ((X) << (8*sizeof(X) - (N))))

/** Returns the N-th bit in X counting from left to right and starting
 * from 0 */
#define PI26B_NTH_LR(X, N) (((X) >> (sizeof(X)*8 - (N) - 1)) & 0x1)

/** Returns the N-th bit in X counting from right to left and starting
 * from 0 */
#define PI26B_NTH_RL(X, N) (((X) >> (N)) & 0x1)

/** Returns X' such that the N-th bit of X' (counting from left to
 * right) is equal to V and the rest is the same as in X */
#define PI26B_SET_NTH_LR(X, N, V) ( ((X) & ~(1 << (8*sizeof(X) - (N) - 1))) \
                                    | (V << (8*sizeof(X) - (N) - 1)) )

/** Returns X' such that the N-th bit of X' (counting from right to
 * left) is equal to V and the rest is the same as in X */
#define PI26B_SET_NTH_RL(X, N, V) ( ((X) & ~(1 << (N))) | (V << N) )

/** Outputs the little endian binary representation of x. It is
 * completed with zeroes so as to be of length <length>. If length is
 * too small, digits of high weight are dropped. */
void pi26B_print_bin_u8(uint8_t x, unsigned int length);

/** Outputs the little endian binary representation of x. It is
 * completed with zeroes so as to be of length <length>. If length is
 * too small, digits of high weight are dropped. */
void pi26B_print_bin_u16(uint16_t x, unsigned int length);

/** Outputs the little endian binary representation of x. It is
 * completed with zeroes so as to be of length <length>. If length is
 * too small, digits of high weight are dropped. */
void pi26B_print_bin_u32(uint32_t x, unsigned int length);

/* void pi26B_set_bit_8(uint8_t * n, unsigned int i, int value); */
/* void pi26B_set_bit_16(uint16_t * n, unsigned int i, int value); */
/* void pi26B_set_bit_32(uint32_t * n, unsigned int i, int value); */

#endif
