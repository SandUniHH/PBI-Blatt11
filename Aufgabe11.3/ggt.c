// Bocher Diedrich Sandmeier

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // for LONG_MAX

int main(int argc, char* argv[])
{

    //could be unsigned, but hard to check for negative numbers then.
    long x = atoi(argv[1]);
    long y = atoi(argv[2]);

    printf("x: %ld\ny: %ld\n", x, y);

    if(x < 1 || y < 1)
    {
        fprintf(stderr,"Bitte eine positive Zahl angeben (kleiner als 2^31)!\n");
        exit(EXIT_FAILURE);
    }

    while (x != y)
    {
        if (x < y)  y = y - x;
        else        x = x - y;
    }

    printf("Der größte gemeinsame Teiler ist %ld.\n", x);

    return (EXIT_SUCCESS);
}