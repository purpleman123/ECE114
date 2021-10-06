// Listing 11: array_pointer.c by Ming-Lun Lee
// Array and pointer differences
#include <stdio.h>
#include <string.h>

int main(void)
{
    char dogArr[] = "I love Snoopy!";
    const char * dogPtr = "I love Odie!";
//  ^^^^^^ recommended usage
//  points to a const data
    int i;
    for (i = 0; i < 6; i++)
        putchar(dogArr[i]);
    putchar('\n');
    for (i = 0; i < 6; i++)
        putchar(dogPtr[i]);
    putchar('\n');
    return 0;
}





