// Bocher Diedrich Sandmeier

#include <stdio.h>
#include <stdlib.h>

#define NUMOFBITS 32 /* number of bits in bitvector */

void check_bitvector(const char *bitvector)
{
    int i;
<<<<<<< HEAD
    
=======

    /*
     * Check necessary?
>>>>>>> e4056d8b88e00f79dfee283ea9c8fec76b73d02a
    if (bitvector[NUMOFBITS] != '\0')
    {
        fprintf(stderr, "The bitvector is too long!\n");
        exit(1);
    }
<<<<<<< HEAD
=======
     */
>>>>>>> e4056d8b88e00f79dfee283ea9c8fec76b73d02a

    for (i = 0; i < NUMOFBITS; i++)
    {
        if (bitvector[i] == '0' || bitvector[i] == '1')
            continue;
        else
        {
<<<<<<< HEAD
            fprintf(stderr, "The bitvector contains symbols other than 0 or 1 or is too short!\n");
=======
            fprintf(stderr, "The bitvector contains symbols other than 0 or 1!\n");
>>>>>>> e4056d8b88e00f79dfee283ea9c8fec76b73d02a
            exit(1);
        }
    }
}

void decimal2bitvector(char *bitvector, unsigned int n)
{
    int i;

    if ((int) n < 0)
    {
        fprintf(stderr, "The number is negative!\n");
        exit(1);
    }

    for (i = NUMOFBITS - 1; i >= 0; i--)
    {
        bitvector[i] = (n % 2 == 1 ? '1' : '0');
        n = n / 2;
    }
<<<<<<< HEAD
    
    bitvector[NUMOFBITS] = '\0';
    
=======

    /*
    printf("bitvector after conversion: ");
    for (i = 0; i <= NUMOFBITS - 1; i++)
    {
        printf("%c", bitvector[i]);
    }
     */
>>>>>>> e4056d8b88e00f79dfee283ea9c8fec76b73d02a
    printf("\n");
}

unsigned int bitvector2decimal(const char *bitvector)
{
    int i, j;
    unsigned int decimal = 0;

    check_bitvector(bitvector);

    for (i = NUMOFBITS - 1, j = 1; i >= 0; i--, j *= 2)
    {
        if (bitvector[i] == '1') decimal += j;
    }

    return decimal;
}

int main(int argc, char* argv[])
{
<<<<<<< HEAD
    char bitvector[NUMOFBITS + 1];
    char *unneeded_pointer;
    unsigned int converted_decimal;

    // convert the argv element to an unsigned int
=======
    char bitvector[NUMOFBITS];
    char *unneeded_pointer;
    unsigned int converted_decimal;

    // convert the argv element to an unsigned long
>>>>>>> e4056d8b88e00f79dfee283ea9c8fec76b73d02a
    unsigned int decimal_no = strtoul(argv[1], &unneeded_pointer, 10);

    decimal2bitvector(bitvector, decimal_no);
    converted_decimal = bitvector2decimal(bitvector);
    printf("Input: %u\nOutput: %u\n", decimal_no, converted_decimal);
    if (decimal_no == converted_decimal) printf("Success!\n");

    return (EXIT_SUCCESS);
}