// Listing 4.3 modified by Ming-Lun Lee
#include <stdio.h>
#include <string.h> // provides strlen() prototype
#define PRAISE "You are an extraordinary being!"
// #define TAX 0.08

int main(void)
{
    char name[40]; // the array is 40.
    //const float tax = 0.08;
    
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n",
           strlen(name), sizeof name);
    printf("The phrase of praise has %d letters ", strlen(PRAISE));
    printf("and occupies %d memory cells.\n", sizeof PRAISE);

    return 0;
}


