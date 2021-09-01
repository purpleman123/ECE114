// sizeof.c: The size of various int types
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* %u: Interpret input as an unsigned decimal integer
	   %z: When followed by an integer specifier, indicates using the type
	       returned by sizeof(C99)      pp. 130-31 from C Primer Plus
	   You can still use %d instead of %zu.
	*/
	printf("The size of char        %zu byte\n", sizeof(char));
	printf("The size of short       %zu bytes\n", sizeof(short));
	printf("The size of int         %zu bytes\n", sizeof(int));
	printf("The size of long        %zu bytes\n", sizeof(long));
	printf("The size of long long   %zu bytes\n", sizeof(long long));

    return 0;
}
