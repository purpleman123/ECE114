// Listing 5.6: The divide.c Program (p.153)
#include <stdio.h>

int main(void)
{
    printf("integer division: 5/4 is %d \n", 5/4);
    printf("integer division: 6/3 is %d \n", 6/3);
    printf("integer division: 7/4 is %d \n", 7/4);
    printf("floating division: 7./4. is %f \n", 7./4.);
    printf("mixed division: 5./4 is %.1f \n", 5./4);
    printf("mixed division: 7/4. is %.2f \n", 7/4.);

    return 0;
}
