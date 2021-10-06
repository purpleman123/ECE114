// Listing 11.8 fgets2.c (modified version)
// using fgets() and fputs() */
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    
    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        fputs(words, stdout);
        while(getchar() != '\n')  // clear input buffer
            continue; 
    }
    puts("Done.");
    
    return 0;
}
