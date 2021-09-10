/* Listing5_3: golf.c -- golf tournament scorecard */
#include <stdio.h>
int main(void)
{
    int jane, tarzan, cheeta;
    
    cheeta = tarzan = jane = 68;
    jane = 69;
    printf("                  cheeta   tarzan    jane\n");
    printf("First round score %4d%9d%9d\n", cheeta, tarzan, jane);

    return 0;
}
