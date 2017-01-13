// Bocher Diedrich Sandmeier

#include <stdio.h>
#include <stdlib.h>

int calculate_exponential(int base, int exponent)
{
  int i, result = base;
  
  for(i = 1; i < exponent; i++)
  {
    result *= base;
  }
  
  return(result);
}

int main(int argc, char* argv[])
{
  int k, vk;
  int iterations;
  
  iterations = atoi(argv[1]);
  if(iterations < 1 || iterations > 1290) // integer overflow during calculation if larger
    {
      fprintf(stderr,"Please use a number between 1 and 1290!\n");
      exit(EXIT_FAILURE);
    }
  
  for (k = 1; k <= iterations; k++)
  {
    if (k == 1) vk = 1;
    else
    {
      vk = calculate_exponential(k, 3) - calculate_exponential(k - 2, 3); // V(k) = k^3 - (k-2)^3
    }
    printf("k = %i\tV(k) = %i\n", k, vk);
  }
  
  return (EXIT_SUCCESS);
}