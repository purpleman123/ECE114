// Listing 6.17: rows1.c
// Using nested for loops
#include <stdio.h>
#define ROWS 8
#define CHARS 12

int main(void)
{
    int row;
    char ch;
    // complete the following nested for loops.
    for(int row = 0; row < ROWS; row++)
    {
        for(char ch = 'A'; ch < 'A' + CHARS ; ch++ ){
        printf("%c", ch);    
        }
    printf("\n");
    }

    return 0;
}
/*   (How to output this?)
ABCDEFGHIJKL
ABCDEFGHIJKL
ABCDEFGHIJKL
ABCDEFGHIJKL
ABCDEFGHIJKL
ABCDEFGHIJKL
ABCDEFGHIJKL
ABCDEFGHIJKL
 */
