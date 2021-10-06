// Listing6_18: rows2.c
// Using nested for loops
#include <stdio.h>
#define ROWS 8
#define CHARS 8

int main(void)
{
    int row;
    char ch;

    for(row = 0; row < ROWS; row++)
    {   // Complete the next line.
        for(         )
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}

/*   (How to output this?)
ABCDEFGH
BCDEFGH
CDEFGH
DEFGH
EFGH
FGH
GH
H
*/
