//Ryan Roos ECE 114 
//HW4 Question 1 9/30/21
#include <stdio.h>

// This program checks if a user can input a combo of words that start with "e" then "c" then "e"
// it will stop the user from trying once on of their inputs is wrong and it is not case sensitive

int main(){

    char word1, word2, word3; // since we only care about the first letter of each input we can use 3 char variable types
    printf("Welcome to the ECE114 Club.\n"); // these lines welcome the user and ask for first entry
    printf("What is the #1 word for your passphrase? ");
    scanf("%c", &word1);
    fflush(stdin); // here the input stream is cleared so that the next input does not include the other letters typed for the first entry

    if ( word1 == 'e' || word1 == 'E'){                   //this begins a series of nested if statments that check if the c variable is the upper or lower case version of the letter needed 
        printf("Enter the #2 word of your passphrase: "); //if incorrect the program ends and the user is informed they did not make it, if correct the user can progress until the final welcome readout is shown
        scanf("%c", &word2);
        fflush(stdin);
            if ( word2 == 'c' || word2 == 'C')
            {
                printf("Enter the #3 word of your passphrase: ");
                scanf("%c", &word3);
                fflush(stdin);
                    if ( word3 == 'e' || word3 == 'E')
                    {
                        printf("You made it!\nWelcome to the ECE114 Club!");
                    }
                    else{
                        printf("Sorry, your phrase was incorrect.\nYou are not allowed in the ECE114 Club.\n");
                    }
            }
            else{
                printf("Sorry, your phrase was incorrect.\nYou are not allowed in the ECE114 Club.\n");
            }
    }
    else{
        printf("Sorry, your phrase was incorrect.\nYou are not allowed in the ECE114 Club.\n");
    }


return 0;
}