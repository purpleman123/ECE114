// Listing 10.10: sum_arr1.c (modified)
// summing the elements of an array
#include <stdio.h>
#define SIZE 8

         // complete the function prototype

int main(void)
{
    int marbles[SIZE] = {10, 50, 25, 9, 41, 38, 17, 99};
    long answer;

    answer = sump(     ,    );   // function call!
    printf("The total number of marbles is %ld.\n", answer);
    // printf("Marbles[1] == %d\n", marbles[1]);
    // printf("Marbles[3] == %d\n", marbles[3]);
    return 0;
}

// use pointer arithmetic
int sump(           ,         ) // function definition
{
    int total = 0;
    // start[1] = 60;   // for testing!
    // start[3] = 10;
    // complete a while loop.
       
    // add value to total & then advance pointer to next element

    return total;
}

