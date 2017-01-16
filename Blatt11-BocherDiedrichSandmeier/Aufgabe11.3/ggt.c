// Bocher Diedrich Sandmeier
//
// Theoretically, 0 would be a legitimate input number as well, but for practical purposes it has been disallowed.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  if (argc != 3)
  {
    printf("Wrong amount of parameters (exactly 2 allowed).\n");
    return (EXIT_FAILURE);
  }  
  
  //could be unsigned, but hard to check for negative numbers then.
    long x = atoi(argv[1]);
    long y = atoi(argv[2]);

    printf("x: %ld\ny: %ld\n", x, y);

    if(x < 1 || y < 1)
    {
        fprintf(stderr,"Please put in positive numbers only (smaller than 2^31)!\n");
        exit(EXIT_FAILURE);
    }

    while (x != y)
    {
        if (x < y)  y = y - x;
        else        x = x - y;
    }

    printf("The greatest common divisor is %ld.\n", x);

    return (EXIT_SUCCESS);
}