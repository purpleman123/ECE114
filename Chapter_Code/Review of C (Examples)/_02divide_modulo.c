// division and modulo
#include <stdio.h>

int main(void)
{
    printf("integer division: 5/4 is %d \n", 5/4);
    printf("integer modulo: 5%%4 is %d \n", 5%4);
    printf("integer division: 6/3 is %d \n", 6/3);
    printf("integer modulo: 6%%3 is %d \n", 6%3);
    printf("integer division: 7/4 is %d \n", 7/4);
    printf("integer modulo: 7%%4 is %d \n", 7%4);
    printf("floating division: 7./4. is %f \n", 7./4.);
    printf("mixed division: 5./4 is %.1f \n", 5./4);
    printf("mixed division: 7/4. is %.2f \n", 7/4.);
    printf("float modulo: 5.3%%4.2 is %d \n", 5.3%4.2);

    return 0;
}
