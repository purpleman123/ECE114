// Listing 8.4: guess.c
// an inefficient and faulty number-guesser
#include <stdio.h>

int main(void)
{
    int guess = 1;
    // Compare the difference between printf and puts.
    puts("Pick an integer from 1 to 100. I will try to guess it.");
    puts("Respond with a y if my guess is right and");
    puts("with an n if it is wrong.");
    printf("Uh...is your number %d?\n", guess);
    // Complete the while loop
    while (       )   // get response, compare to y
    {
        printf("Well, then, is it %d?\n", ++guess);
    }
    puts("I knew I could do it!");
    
    return 0;
}

/*
    while(getchar() != '\n')
         continue;  // #1
    while(getchar() != '\n'){}   //#2
    while(getchar() != '\n');    //#3    
    fflush(stdin);  // #4
*/
