/**
 * @name pi26_array.c
 * @author Leo "picarresursix" Perrin <leoperrin@picarresursix.fr>
 * @date Time-stamp: <2013-07-12 18:23:24 leo>
 *
 * Easily read arrays of different types from stdin and output them to
 * stdout.
 */


#include "pi26_array.h"


/* !SECTION! Array IO */
/* --------------------- */

void pi26_array1_ui_read_stdin(unsigned int ** array, unsigned int size)
{
        unsigned int * result, input;
        unsigned int i=0;
        
        result = malloc(size * sizeof(unsigned int));
        memset(result, 0, size *sizeof(unsigned int));
        while (i<size && scanf("%x", &input)>0)
        {
                result[i] = input;
                i++;
        }
        (*array) = result;
}


void pi26_array1_ui_print_stdout(
        unsigned int * array,
        unsigned int size,
        char * format)
{
        unsigned int i;
        for (i=0 ; i<size ; i++)
                printf(format, array[i]);
        puts("");
}


void pi26_array1_u8_print_stdout(
        uint8_t * array,
        unsigned int size,
        char * format)
{
        unsigned int i;
        for (i=0 ; i<size ; i++)
                printf(format, array[i]);
        puts("");
}

void pi26_array1_u16_print_stdout(
        uint16_t * array,
        unsigned int size,
        char * format)
{
        unsigned int i;
        for (i=0 ; i<size ; i++)
                printf(format, array[i]);
        puts("");
}

void pi26_array1_u32_print_stdout(
        uint32_t * array,
        unsigned int size,
        char * format)
{
        unsigned int i;
        for (i=0 ; i<size ; i++)
                printf(format, array[i]);
        puts("");
}


