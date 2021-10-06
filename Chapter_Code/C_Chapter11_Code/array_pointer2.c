// Listing 11: array_pointer2.c by Ming-Lun Lee
// Array and pointer differences
#include <stdio.h>
#include <string.h> // for strlen

int main(void)
{
    char dogArr[] = "I love Snoopy!";
    const char * dogPtr = "I love Odie!";
//  ^^^^^^ recommended usage
//  points to a const data
    for (int i = 0; i < strlen(dogArr); i++)
        putchar(dogArr[i]);
        // strlen() counts the no. of chars before '\0'
    putchar('\n');
    while(*(dogPtr) != '\0') // stop at end of string
        putchar(*(dogPtr++)); // print character, advance pointer

    putchar('\n');
    return 0;
}

