//Ryan Roos ECE 114 
//HW3 Question 2 9/23/21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int digit1, digit2, digit3, digit4; // ints for the user entered digits
    int random1, random2, random3, random4; // these are used to store the randomly generated digits that are assigned at the start of the program
    int round=1; // sets that round to 1 so that the round count reads out correctly during the loop and at the end when it shows how many rounds it took the user to get the right answer
    srand((unsigned)time(NULL)); // creates the seed for the random number generator based on the system time when the system starts
    random1 = rand() % 5 + 1; // lines 12-15 are assigning a random number 1 - 5 to each of the random number variables 
    random2 = rand() % 5 + 1;
    random3 = rand() % 5 + 1;
    random4 = rand() % 5 + 1;
    do { // start of the do while loop
        printf("\nRound #%d:\n", round); // print out that shows the current round number
        printf("Please enter digit #1 (1~5): "); // lines 18 - 25 are where the user can enter their guesses for the 4 random digits
        scanf("%d", &digit1);
        printf("Please enter digit #2 (1~5): ");
        scanf("%d", &digit2);
        printf("Please enter digit #3 (1~5): ");
        scanf("%d", &digit3);
        printf("Please enter digit #4 (1~5): ");
        scanf("%d", &digit4);
        printf("\nFirst     Second    Third     Fourth\n"); // header for the table that is printed out after each round
        printf("%-10d%-10d%-10d%d\n", digit1, digit2, digit3, digit4); // second line of table that shows the input digits
        if (digit1==random1)      // lines 28-43 represent a nested if else statment used to first check if the digit is correct to output T, then if the digit is equal to any of the other digits in the code to output a W
            printf("T         "); // then finally if the number is found no where an F is the output. This loop is repeated for each of the 4 digits which as a whole will make up the third line of the table
        else{ 
            if (digit1==random2)
            printf("W         ");
            else{
                if (digit1==random3)
                printf("W         ");
                else{
                    if (digit1==random4)
                    printf("W         ");
                    else
                    printf("F         ");
                }
            }
        }
        if (digit2==random2)
            printf("T         ");
        else{ 
            if (digit2==random1)
            printf("W         ");
            else{
                if (digit2==random3)
                printf("W         ");
                else{
                    if (digit2==random4)
                    printf("W         ");
                    else
                    printf("F         ");
                }
            }
        }
        if (digit3==random3)
            printf("T         ");
        else{ 
            if (digit3==random2)
            printf("W         ");
            else{
                if (digit3==random1)
                printf("W         ");
                else{
                    if (digit3==random4)
                    printf("W         ");
                    else
                    printf("F         ");
                }
            }
        }
        if (digit4==random4)
            printf("T         ");
        else{ 
            if (digit4==random2)
            printf("W         ");
            else{
                if (digit4==random3)
                printf("W         ");
                else{
                    if (digit4==random1)
                    printf("W         ");
                    else
                    printf("F         ");
                }
            }
        }
        round++; // increases the round number at the end of the loop
    }while (digit1!=random1 || digit2!=random2 || digit3!=random3 || digit4!=random4); // logical statment that ensures the loop will contiune until all four digits are equal to their associated random digit
   
    printf("Congratulations!\nThank you for playing! Total rounds: %d", round-1); // final readout of congrats and total round number
return 0;
} 