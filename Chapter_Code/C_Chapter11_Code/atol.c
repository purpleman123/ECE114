// Listing 11: atol.c
// converts the string argument str to a long integer
#include <stdio.h>
#include <stdlib.h> // for atoi()
#include <string.h> // for strcpy()

int main()
{
    long val;
    char str[20] = {'\0'};

    strcpy(str, "989934899183498");
    val = atol(str);
    printf("String value = %s, Int value = %ld\n", str, val);

    strcpy(str, "tutorialspoint.com");
    val = atol(str);
    printf("String value = %s, Int value = %ld\n", str, val);

    return(0);
}


