// Listing 6.1: summing.c
// Summing integers entered interactively
#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L; // initialize sum to 0
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit): ");
    while(1 == (status = scanf("%ld", &num))) 
    {   // You can use the following line instead. Why?
        // while(scanf("%ld", &num))   
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}
