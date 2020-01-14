#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Types.h"



#define MAX_PRIMES  (2000000)

static void test_case(void)
{
  /*
    Summation of primes
    Problem 10 
    The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

    Find the sum of all the primes below two million.
  */

  unsigned int candidate     = 0;
  unsigned long sum_of_primes = 2; // consider 2 as special even case
  unsigned int is_prime;
  unsigned int i;


  for (candidate=3; candidate<MAX_PRIMES; candidate+=2)
  {
    is_prime = 1;
    for(i=2; i<candidate; i++)
    {
      if(0 == (candidate % i))
      {
        is_prime = 0;
      }
    }
    if(is_prime)
    {
       //printf("%d is prime\n", candidate);
       sum_of_primes += candidate;
    }
    
  }

  printf("sum of primes = %ld\n", sum_of_primes); 



}





int main()
{
    printf("start test\n");
    test_case();
    printf("end test\n");
    return 0;
}




