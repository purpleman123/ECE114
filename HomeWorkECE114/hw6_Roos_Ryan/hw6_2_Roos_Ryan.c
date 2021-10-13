#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
    srand((unsigned)time(NULL));
    int num = rand() % 8 + 1;
    printf("Let's play count off...\nCount 1, 2, 3!\nAnyone who counts 3 is out!\nWho will start to count 1?\n");
    printf("%s!!!\n", players[num-1]);

    printf("Player #%d %s counts 1. Stay!\n", num, players[num-1]);
    
return 0;
}