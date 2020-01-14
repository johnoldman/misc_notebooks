#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Types.h"


// return 0 if a palidrome
static U32 is_it_a_palidrome(const char str[])
{
    U32 end;
    U32 start;
    U32 palidrome = 0;

    start = 0;
    end = strlen(str) - 1;

    //printf("end = %d\n", end);

    do
    {
        if(str[start] != str[end])
        {
            palidrome++;
        }
        //printf("%d    %d    %d    %d         %d\n", start, end, str[start], str[end], palidrome);
        start++;
        end--;
    }while(start < end);
    return palidrome;
}


static void run_test(void)
{
    /*
    Euler problem 4
    A palindromic number reads the same both ways.
    The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

    Find the largest palindrome made from the product of two 3-digit numbers.
    */


    U32 i,j;
    U32 num;
    char test_str[1000];
    U32 biggest = 0;


    
    for(i=100; i<999; i++)
    {
        for(j=100; j<999; j++)
        {
            num = i*j;
            sprintf(test_str, "%d", num);

            if(!is_it_a_palidrome(test_str))
            {
                printf("%d   %d  =   %d\n", i, j, i*j);

                if( (i*j) > biggest)
                {
                    biggest = (i*j);
                }
            }
        }
    }
    printf("Biggest = %d\n", biggest);
}
    


int main()
{
    printf("start test\n");
    run_test();
    printf("end test\n");
    return 0;
}




