// Listing 10.10: sum_arr1.c (modified)
// summing the elements of an array
#include <stdio.h>
#define SIZE 8

                  // function prototype of sump

int main(void)
{
    int marbles[SIZE] = {10, 50, 25, 9, 41, 38, 17, 99};
    long answer;

    answer = sump(marbles, SIZE);  // function call
    printf("The total number of marbles is %ld.\n", answer);

    return 0;
}

// complete the function definition of sump here



