// Listing 7.2: cypher1.c
// Altering inputs and preserving spaces
#include <stdio.h>
#define SPACE ' '   // that's quote-space-quote

int main(void)
{
    char ch;
/*    ch = getchar();
    while(ch != '\n')
    {
        if (ch == SPACE) // leave the space
            putchar(ch);  // character unchanged
        else
            putchar(ch + 1); // change other characters
        ch = getchar();   // get next charcter
    }
*/

    while(          )  // How to combine two actions?
    {
        if (ch == SPACE) // leave the space
            putchar(ch);  // character unchanged
        else
            putchar(ch + 1); // change other characters
    }


    putchar(ch);     // print the newline
    return 0;
}
