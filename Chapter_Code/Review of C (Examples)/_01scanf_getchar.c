// scanf_getchar.c
#include <stdio.h>

int main() {
    char ch;
    printf("Please enter a character: ");
    // How to save a character to ch? Two methods:
                     // #1
                     // #2
    printf("The code for %c is %d.\n", ch, ch);
                         // *** clear input buffer
    printf("Please enter a character: ");
    // get another character
                     // #1
                     // #2 
    printf("The code for %c is %d.\n", ch, ch);
    
    return 0;
}

