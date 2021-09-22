// Listing 9.4 misuse.c: uses a function incorrectly
#include <stdio.h>
int imax(); // old-style declaration

int main(void)
{
	printf("The maximum of %d and %d is %d.\n",
			3, 5, imax(3));
	printf("The maximum of %d and %d is %d.\n",
			3, 5, imax(3, 5));
	return 0;
}

int imax(int n, int m)
{
	return (n > m ? n : m);
}

