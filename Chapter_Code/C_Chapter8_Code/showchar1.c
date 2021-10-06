// Listing 8.5 showchar1.c (modified by Ming-Lun Lee)
// Program with a BIG I/O Probelm
#include <stdio.h>

int main(void) {
    int ch;  // character to be printed
    int rows, cols;
    puts("Enter a character and two integers:(e.g.: @ 5 3)");
    while((ch = getchar())!= '\n')
    {
        scanf("%d %d", &rows, &cols);
        int i,j;
        for(i = 1; i <= rows; i++)
        {
            for(j = 1; j<= cols; j++)
                putchar(ch);
            putchar('\n'); // end line and start a new one
        }

        puts("Enter another character and two integers;");
        puts("enter a newline to quit.");
    }
    puts("Bye");
    return 0;
}



