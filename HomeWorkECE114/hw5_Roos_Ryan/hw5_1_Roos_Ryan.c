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
            while(counter < SIZE){
                random = rand() % 99 + 1;
                randNums[counter] = random;
                counter++;
            }
            for (int i = 0; i < SIZE; i++){
                for (int k = i+1; k < SIZE; k++){
                    if(randNums[i] == randNums[k]){
                    duplicate = 1;  
                    }
                }
            }
            counter = 0;
            printf("%d\n", duplicate);

        } while (duplicate == 1);
    printf("The lottery machine has generated 8 numbers between 1 and 99.\nEnter your lucky numbers to see if they are one of them!\nYou can have three guesses!\n\n");

    while (guessnum < GUESS){
        printf("Enter a number between 1 and 99: ");
        scanf("%d", &number);

        for(int j = 0; j < SIZE; j++){
            outcome = (number == randNums[j]);
            if (outcome == 1)
                break;
        }
        if (outcome == 1){
            printf("Bingo!\n\nCongratulations! You win Y^_^Y");
            break;
        }
        if( (outcome == 0) && (guessnum == GUESS-1) ){
            printf("\nSorry! You lost ~>_<~");
            break;
        }
        printf("Miss!\n");
        fflush(stdin);
        guessnum++;
    }

    printf("\nThe 8 secret numbers are:\n");

    while (counter2 < SIZE){
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