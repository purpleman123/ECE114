// fibonacci3.c: (Non-recursive version)
// Modified by Ming-Lun Lee
#include <stdio.h>
#define MAX 200

double fibonacci(int n);

int main()
{
    int i;
    for(i = 1; i < MAX; i++)
        printf("Fibonacci( %d ) = %.0lf\n", i, fibonacci(i));
    return 0;
} // end main

// non-recursive definition of function fibonacci
double fibonacci(int n)    // 1 1 2 3 5 8... C
{
    int i;
    double f0 = 0;
    double f1 = 1;
    double f2;  // f2 = f1 + f0
    
    if( n == 0 || n == 1)
        return n;
    else
    {
        for(i = 2;i <= n; i++)
        {
            f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }
        return f2;
    }
} // end function fibonacci
