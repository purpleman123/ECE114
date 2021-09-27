 // factorial.c
// Calculating the factorials of positive integers from 1 to 25

#include <stdio.h>

 // function prototype or declaration
long factorial(int n);
int main(void) // function main begins program execution
{
    int i;
    for (i = 1; i <= 25; i++)
        printf("%d! = %ld\n", i, factorial(i) ); // function call

    return 0;
}

// function definition
long factorial(int n){
    int output = 0;
    if (n != 1)
        return n * factorial(n-1);
    else
        return 0;
}
