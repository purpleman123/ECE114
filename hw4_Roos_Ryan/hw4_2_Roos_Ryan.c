#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int playernum, random;
    printf("Pick how many players will play.\nEnter an integer between 2 and 4: ");
    scanf("%d", &playernum);
    fflush(stdin);
    while (playernum < 2 || playernum > 4)
    {
     printf("Try again. Enter an integer between 2 and 4: ");
     scanf("%d", &playernum);
     fflush(stdin);   
    }
    printf("\nBeginning the game..\n\nThe computer is thinking..\nThe computer has chosen a number.\n\n");
    
    srand((unsigned)time(NULL));
    random = rand() % 1000;

    printf("%d", random);

// need loop to say player numbers turn then have them enter then validate entry then store how far away that player was only if the difference
// is greater then previous player, have loop run for total number of players then output winning player with what the random number was
// REMEBER: function needed for player input validation. whole program needs to repeat if 1 is entered at end and end if 0 is entered
return 0;
}