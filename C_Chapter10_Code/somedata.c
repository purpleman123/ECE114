// Listing 10.3: somedata.c
// Partially initialized array
#include <stdio.h>
#define SIZE 4

int main(void)
{
    int some_data[SIZE] = {586, 392, -50, 32, 190};
    int i;

    printf("%2s%14s\n", "i", "some_data[i]");
    for (i = 0; i< SIZE; i++)
        printf("%2d%14d\n", i, some_data[i]);

    return 0;
}
