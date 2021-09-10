// while_cube.c
// Using a while loop to make a table of cubes
#include <stdio.h>

int main(void)
{
    int num = 1;
    printf("    n     n cubed\n");
    while(num <= 5){
       printf("%5d%12d\n", num, num * num * num);
       num++;
    }
    
    return 0;
}




