// fibonacci.c: From C How to Program, 7th ed. Fig. 5.19
// Modified by Ming-Lun Lee
#include <stdio.h>
#define MAX 93

long fibonacci(int n);

int main()
{
    int i;
    for(i = 1; i < MAX; i++)
        printf("Fibonacci( %d ) = %ld\n", i, fibonacci(i));
    return 0;
} // end main

// recursive definition of function fibonacci
long fibonacci(int n)
{
    // base case
    if( n == 0 || n == 1 )
        return n;   // not return 1!
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
} // end function fibonacci
