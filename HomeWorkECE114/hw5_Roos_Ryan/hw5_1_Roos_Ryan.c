//Ryan Roos ECE 114 
//HW5 Question 1 10/7/21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define RANGE 99
#define GUESS 3
#define SIZE 8

int main(){

    int randNums[SIZE] = {0};
    int sorted = 0;
    int number, random, outcome, fillx;
    int guessnum = 0, randomCheck = 1, duplicate = 0, counter = 0, counter2 = 0;
    srand((unsigned)time(NULL));

        do{
            duplicate = 0;
            while(counter < SIZE){ // this loop will generate random numbers and fill the array with them
                random = rand() % 99 + 1;
                randNums[counter] = random;
                counter++;
            }
            for (int i = 0; i < SIZE; i++){ // checks if any numbers in the full array are equal to each other, if so the whole array will be remade and tested again
                for (int k = i+1; k < SIZE; k++){
                    if(randNums[i] == randNums[k]){
                    duplicate = 1;  
                    }
                }
            }
            counter = 0;

        } while (duplicate == 1); // will loop if duplicate is found
    printf("The lottery machine has generated 8 numbers between 1 and 99.\nEnter your lucky numbers to see if they are one of them!\nYou can have three guesses!\n\n");

    while (guessnum < GUESS){ // loop for desired number of guesses
        printf("Enter a number between 1 and 99: ");
        scanf("%d", &number);

        for(int j = 0; j < SIZE; j++){ // this will check if guess is contained in any part of the random number array
            outcome = (number == randNums[j]);
            if (outcome == 1)
                break;
        }
        if (outcome == 1){ // if number matches the program is over and will print this message
            printf("Bingo!\n\nCongratulations! You win Y^_^Y");
            break;
        }
        printf("Miss!\n");
        fflush(stdin);
        guessnum++;
    }
    if( outcome == 0 ){ // this will print if loop above ended due to guesses running out and not a correct guess
        printf("\nSorry! You lost ~>_<~");
    }
    printf("\nThe 8 secret numbers are:\n");

    while (counter2 < SIZE){ // loop to print random numbers out in order from least to greatest, works by finding number in array furthest from 100 then it prints that number and writes 100 to that spot in the array and repeats until all parts of array have been checked
        for (int x = 0; x<SIZE; x++){
            if(abs(randNums[x]-100) > sorted){
                sorted = abs(randNums[x]-100);
                fillx = x;
            }
            else{
                continue;
            }
        }
        printf("%d  ", randNums[fillx]);
        randNums[fillx]=100;
        sorted = 0;
        counter2++;
    }
return 0;
}