#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGE 99
#define GUESS 3
#define SIZE 8

int main(){

int randNums[SIZE];
int number, random, outcome;
int guessnum = 0, counter = 0, randomCheck = 0;
srand((unsigned)time(NULL));


while(counter < SIZE){

    random = rand() % 99 + 1;
    randNums[counter] = random;
    for(int k = 0; k < SIZE; k++)
    {
        randomCheck = (random == randNums[k]);
        if (randomCheck==1){
            random = rand() % 99 + 1;
            randNums[counter] = random;
            continue;
        }
    }
    counter++;
}
printf("The lottery machine has generated 8 numbers between 1 and 99.\nEnter your lucky numbers to see if they are one of them!\nYou can have three guesses!\n\n");

while (guessnum < GUESS){
    printf("Enter a number between 1 and 99: ");
    scanf("%d", &number);

    for(int j = 0; j < SIZE; j++)
    {
        outcome = (number == randNums[j]);
        if (outcome == 1)
        break;
    }
    if (outcome == 1)
    {
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
for (int i = 0; i < SIZE; i++)
    printf("%d  ", randNums[i]); // need to order the output



return 0;
}