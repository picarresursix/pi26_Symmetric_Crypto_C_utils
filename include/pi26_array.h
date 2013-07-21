/**
 * @name pi26_array.h
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-12 18:26:58 leo>
 *
 * Easily read arrays of different types from stdin and output them to
 * stdout.
 */

#ifndef _PI26_ARRAY_H_
#define _PI26_ARRAY_H_

#include "pi26_utils.h"

/* !SECTION! Array interaction */
/* =========================== */

/**
 * Reads a space separated list of <size> hexadecimal unsigned
 * integers and sets (*array) to be an array containing them.
 *
 * If less than <size> numbers are read, the remaining is filled with
 * 0.
 */
void pi26_read_array1_ui_stdin(
        unsigned int ** array, /*< A pointer to where the array will be. */
                unsigned int size /*< The size of the array. */
        );

/**
 * Prints an array of unsigned int of dimension 1 on stdout using the
 * given format to display each unsigned int. A newline is inserted in
 * the end.
 */
void pi26_print_array1_ui_stdout(
        unsigned int * array, /*< The array to print. */
        unsigned int size,    /*< The size of the array. */
        char * format         /*< The format of each number. */
        );

/**
 * Prints an array of unsigned int of dimension 1 on stdout using the
 * given format to display each uint8_t. A newline is inserted in
 * the end.
 */
void pi26_array1_u8_print_stdout(
        uint8_t * array,   /*< The array to print. */       
        unsigned int size, /*< The size of the array. */    
        char * format      /*< The format of each number. */
        );
/**
 * Prints an array of unsigned int of dimension 1 on stdout using the
 * given format to display each uint16_t. A newline is inserted in
 * the end.
 */
void pi26_array1_u16_print_stdout(
        uint16_t * array,  /*< The array to print. */       
        unsigned int size, /*< The size of the array. */    
        char * format      /*< The format of each number. */
        );
/**
 * Prints an array of unsigned int of dimension 1 on stdout using the
 * given format to display each uint32_t. A newline is inserted in
 * the end.
 */
void pi26_array1_u32_print_stdout(
        uint32_t * array,  /*< The array to print. */       
        unsigned int size, /*< The size of the array. */    
        char * format      /*< The format of each number. */
        );



#endif /* _PI26_ARRAY_H_ */
