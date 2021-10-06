// Listing 8.1: echo.c
// repeating input
#include <stdio.h>

int main(void)
{
    char ch;
    // complete this while loop
    while ( (ch = getchar()) != '#')
        putchar(ch);

    putchar('\n');
    return 0;
}

