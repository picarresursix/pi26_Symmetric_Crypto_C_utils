/**
 * @name pi26_bits.h
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-14 11:41:03 leo>
 *
 * Functions for fiddling with bits.
 */



/* !TODO! Turn these into macros. */

#define PI26_BITS_ROT_LEFT(X, N) (((X) << (N)) | ((X) >> (sizeof(X) - (N))))
#define PI26_BITS_ROT_RIGHT(X, N) (((X) >> (N)) | ((X) >> (sizeof(X) - (N))))

#define PI26_BITS

char * pi26_bits_u8_representation(uint8_t n);
char * pi26_bits_u16_representation(uint16_t n);
char * pi26_bits_u32_representation(uint32_t int n);

int pi26_bits_ith_bit_8(uint8_t n, unsigned int i);
int pi26_bits_ith_bit_16(uint16_t n, unsigned int i);
int pi26_bits_ith_bit_32(uint832t n, unsigned int i);

void pi26_bits_set_bit_8(uint8_t * n, unsigned int i, int value);
void pi26_bits_set_bit_16(uint16_t * n, unsigned int i, int value);
void pi26_bits_set_bit_32(uint32_t * n, unsigned int i, int value);

void pi26_bits_rot_left_8(uint8_t * n, unsigned int shift);
void pi26_bits_rot_left_16(uint16_t * n, unsigned int shift);
void pi26_bits_rot_left_32(uint32_t * n, unsigned int shift);
