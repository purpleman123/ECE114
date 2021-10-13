#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
    const char * players[8] = {
        "SpongeBob SquarePants", // players[0]
        "Snoopy",                // players[1]...
        "Garfield",
        "Minne Mouse",
        "Dora",
        "Wonder Woman",
        "Superman",
        "Elsa"
    };
    int count = 1;
    int winner = 0;
    srand((unsigned)time(NULL));
    int num = rand() % 8 + 1;
    printf("Let's play count off...\nCount 1, 2, 3!\nAnyone who counts 3 is out!\nWho will start to count 1?\n");
    printf("%s!!!\n", players[num-1]);

    while(winner < 2){
        if(strcmp(players[num-1], "OUT") == 0){
            num++;
        }
        if(count == 3){
            printf("Player #%d %s counts %d. Goodbye!\n", num, players[num-1], count);
            players[num-1] = "OUT";
            count = 1;
        }
        else{
            printf("Player #%d %s counts %d. Stay!\n", num, players[num-1], count);
            num++;
            count++;
        }
        winner++;
    }
    
    // if slot in array is "OUT" then skip without printing or counting up, once player hits 3 save "OUT" to their spot and reset
    // do this until one player is left then print out final message
    // if out is found: increase player count by 2, DONT increase count
    // if out is not found: increase player by 1, incease count
    // if out is not found and count = 3, print different youre out message, save "OUT" to that location in array
    // use string compare to check for OUT
return 0;
}