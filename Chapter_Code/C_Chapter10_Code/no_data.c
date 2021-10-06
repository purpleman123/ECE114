// Listing 10.2: no_data.c
// Uninitialized array
#include <stdio.h>
#define SIZE 32   // try different sizes!

int main(void)
{
    int no_data[SIZE] = {0}; // uninitialized array
    no_data[1] = 0;
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i< SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);
    return 0;
}

