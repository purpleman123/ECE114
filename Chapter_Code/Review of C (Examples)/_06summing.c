// Listing 6.1: summing.c
// Summing integers entered interactively
#include <stdio.h>

int main(void)
{
    // Q: Find bugs?
    long num;
    long sum; 

    printf("Enter a positive integer to be summed (q to quit): ");
    while(scanf("%ld", &num))
    {
        sum = sum + num; // sum += num;
        printf("Enter the next postive integer (q to quit): ");
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}
