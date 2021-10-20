// format_specifiers.c
#include <stdio.h>

int main(void)
{
	printf("Characters:  \n", '%', 'A');
	printf("Decimals:  \n", 1977, 650000L);
	printf("Preceding with blanks: \n", 1977);
	printf("Preceding with zeros: \n", 1977);
    printf("Some different radices: %d %x %o %#x %#o\n",
    		   200, 200, 200, 200, 200);
    printf("floats: %.20f %+.0e %E\n", -3.1416, -3.1416, -3.1416);
    printf("Width trick: \n", 20, 10);
    printf("\n", "A");
    return 0;
}


