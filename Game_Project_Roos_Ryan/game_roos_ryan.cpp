#include <iostream>

int main(){
    char menuVar = 'p';
    std::cout << "***** WELCOME TO DUNGEON CRAWLER: AN ECE 114 GAME *****\n";
    while (menuVar == 'p' || menuVar == 'P'){
        std::cout << "Enter 'p, P' to play or 'q, Q' to quit the game.\n";
        std::cin >> menuVar;
        //INPUT VAL

        if (menuVar == 'q' || menuVar == 'Q'){
            break;
        }
        else{
            // begin actual game
        }
    }
    std::cout << "Thanks for playing!";

return 0;
}