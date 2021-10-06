//Ryan Roos ECE 114 
//HW4 Question 2 9/30/21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// the purpose of this program is to let users pick a number of players, then each player gets a chance to guess a randomly generated number. A function is used to confirm
// if the input is valid, then the player whose guess is closest is informed they have won. Finally the user gets to pick to continue with a new randomly generated number
// or end the program. All inputs go through input validation.

int main(){
    int playernum, random, input1, winnerplayer; //playernum records how many players will be playing, random stores the randomly generated number, input1 is the variable used to store the output of the function, winnerplayer stores the current winner
    int inputIntInRange(int lower, int upper); // prototype for the function to avoid warning 
    int menu = 1; // this is the variable used to select if the user wishes to continue or quit
    int winnernum = 10000; // this stores the number that is current;y the closest guess, it is set to a large number to ensure the first guess will replace it
    int counter = 1; // counter variable to store the player number the program is currently on
    printf("Pick how many players will play.\nEnter an integer between 2 and 4: ");
    playernum = inputIntInRange(2, 4); // input validation function
    printf("\nBeginning the game..");
    while (menu == 1){ // while loop to allow the program to repeat from the right place if the user selects 1 at end of program
        printf("\n\nThe computer is thinking..\nThe computer has chosen a number.\n\n");
    
        srand((unsigned)time(NULL)); // random number generation between 0-999
        random = rand() % 1000;

        while (counter <= playernum){ // while statment that runs once for each user
            printf("Player %d's turn.\nEnter an integer between 0 and 999: ", counter);
            input1 = inputIntInRange(0, 999); //input validation function
            if (abs(random-input1) < abs(random-winnernum)){ // this if statment will only save the current player number and guess if the guess is closer then the previous guess's, this works due to the "abs" function in math.h
                winnernum = input1;
                winnerplayer = counter;
            } 
            counter++;
        }
        printf("\nPlayer %d wins! The number was %d.\n", winnerplayer, random); // once all players have gone the winner variables are read 
        printf("\nEnter 1 to play again, 0 to quit.\nEnter an integer between 0 and 1:"); // this is where the user can pick to keep going or stop
        menu = inputIntInRange(0, 1); // input validation function used again
        counter = 1; // resets counter so that when round begins again the counter is still in the right inital value
        } 
    printf("\nGoodbye!"); // this is displayed when user exits by entering 0
return 0;
}

int inputIntInRange(int lower, int upper){ // function created to scan for input and then ensure it is a valid input given a number range
    int input;
       while ( 0==scanf("%ld", &input) ) // first loop ensures input is a number and not a character or word
        {
            printf("Try again. Enter an integer between %d and %d: ", lower, upper);
            scanf("%d", &input);
            fflush(stdin);
        }
        while ( (input > upper || input < lower) ) // then it makes sure the input is with in the upper and lower number bounds, due to the bounds being variables this function can be used for the player number input, number guess input and menu input saving many lines of code
        {
            printf("Try again. Enter an integer between %d and %d: ", lower, upper);
            scanf("%d", &input);
            fflush(stdin);
        }

return  input; 
}