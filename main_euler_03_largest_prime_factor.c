#include <stdio.h>
#include <stdlib.h>
#include "Types.h"


static void run_test(void)
{
    /*
     Euler 03 - Largest prime factor
     The prime factors of 13195 are 5, 7, 13 and 29.
     What is the largest prime factor of the number 600851475143 ?
     */

    long long n = 600851475143LL;
    //long long n = 13195; 
    long long lastFactor;
    long long factor;

    factor = 2;
    lastFactor = 1;

    do
    {
        //printf("n mod factor = %lld\n", n % factor);
        if( (n % factor) == 0)
        {
            lastFactor = factor;
            printf("last factor = %lld\n", lastFactor);
            n /= factor;
        }
        factor++; 
        //printf("factor = %lld   n = %lld\n", factor, n);
    }while(n > 1);

    printf("last factor = %lld\n", lastFactor);
}



int main()
{
    printf("start test\n");
    run_test();
    printf("end test\n");
    return 0;
}




