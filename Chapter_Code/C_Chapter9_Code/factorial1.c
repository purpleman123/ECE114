 // factorial1.c (revised by Ming-Lun Lee)
// Calculating the factorials of positive integers from 1 to 25
// Change the data type from long to double

#include <stdio.h>

double factorial(int n); // function prototype or declaration

int main(void) // function main begins program execution
{
    int i;
    for (i = 1; i <= 25; i++)
        printf("%d! = %.0lf\n", i, factorial(i)); // function call
        // use .0lf to print an integer
    return 0;
}

double factorial(int n) // function definition
{
    if( n != 1 )
      return n * factorial(n-1); // recursive
    return 1;
}

