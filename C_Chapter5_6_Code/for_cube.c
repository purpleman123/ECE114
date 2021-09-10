// Listing 6.12: for_cube.c
// Using a for loop to make a table of cubes
// Modified by Ming-Lun Lee
#include <stdio.h>

int main(void)
{
    int num = 1;
    printf("    n     n cubed\n");

    while(num <= 5){
       printf("%5d%12d\n", num, num * num * num);
       num++;
    }
    // Q: How to convert from a while loop to a for loop?

   return 0;
}
