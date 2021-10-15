//Ryan Roos ECE 114 
//HW6 Question 2 10/14/21
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

// program function: simulates a game where a random player starts at 1, once a player says 3 they are out and next player begins at 1, cont. until one winner

int main(){
    const char * players[8] = {
        "SpongeBob SquarePants", // hard coded array with different characters
        "Snoopy",                
        "Garfield",
        "Minne Mouse",
        "Dora",
        "Wonder Woman",
        "Superman",
        "Elsa"
    };
    int count = 1; //used to represent which number
    int winner = 0; //used to record if we have reached winner
    int winnernum = 0; //saves winner spot in array
    srand((unsigned)time(NULL));
    int num = rand() % 8 + 1;
    printf("Let's play count off...\nCount 1, 2, 3!\nAnyone who counts 3 is out!\nWho will start to count 1?\n");
    printf("%s!!!\n", players[num-1]);

    while (winner != 21){                                    // this loops to 21 because no matter what it will take 21 turns to reach a winner
        if(strcmp(players[num-1], "OUT") == 0){              // everytime a player counts 3, "OUT" is saved to their location in the array, this will
            num++;                                           // skip over entries with "OUT" found in them
            if(num == 9){
                num = 1;
            }
        }
        else{
            if(count == 3){
                printf("Player #%d %s counts %d. Goodbye!\n", num, players[num-1], count); // if count 3 the player is marked out
                players[num-1] = "OUT";
                count = 1;
                if( ++num == 9){
                    num = 1;
                    winner++;
                }
                else{
                    winner++;
                }
            }
            else{
                printf("Player #%d %s counts %d. Stay!\n", num, players[num-1], count); // in every other situation everything goes up one and the loop cont.
                if( ++num == 9){                                                     
                    num = 1;                                 // NOTE: everytime the next num is 9 num is reset to 1 in every part of the program, this ensures it loops from 8 to 1 instead of counting up 
                    count++;
                    winner++;
                }
                else{
                    count++;
                    winner++;
                }
            }
        }   
    }
    for(int i = 0; i < 8; i++){        // once every spot except 1 is filled with "OUT" this will find the slot with a player name left and print out that they won
        if(strcmp(players[i], "OUT") != 0){
            winnernum=i;
        }
    }
    printf("%s won the game! Congratulations!", players[winnernum] );
return 0;
}