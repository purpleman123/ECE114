#include <iostream>
#include <string>
#include <unistd.h>

int main(){
    char menuVar = 'p';
    std::string name;
    int monsterloss, goldnum;
    std::cout << "***** WELCOME TO DUNGEON CRAWLER: AN ECE 114 GAME *****\n";
    while (menuVar == 'p' || menuVar == 'P'){
        std::cout << "Enter 'p, P' to play or 'q, Q' to quit the game.\n";
        std::cin >> menuVar;
        fflush(stdin);
        //INPUT VAL
        if (menuVar == 'q' || menuVar == 'Q'){
            break;
        }
        else{
            std::cout << "Enter your player name before we begin: ";
            std::getline(std::cin, name);
            fflush(stdin);
            std::cout << "\nHello " << name << " this is the beginning of a grand journey through a dark and scary dungeon.\n";
            usleep(3000000);
            std::cout << "At the start of each turn you will choose 1 of 3 directions to go.\n";
            usleep(3000000);
            std::cout << "Once your next move is made there is either free gold or you must battle a monster.\n";
            usleep(3000000);
            std::cout << name << " you will now be entering The Dungeon. . .\n====================================================================================\n";
            while (monsterloss < 3 && goldnum < 10){
                // direction choose
                std::cout << "Choose which path forward you wish to take, enter 'f' for forward, 'r' for right, and 'l' for left.\n";
                // random free gold or monster

                // if gold random generate amount

                // if monster random generate which diffcult

                // bring up monster picture and allow input to see if win or lose, then award gold

                // read out outcome of turn and repeat
            }
            // if monsterloss is 3 read out how you died in the duegon and return to menu

            // if goldnum is 10 or more explain how you are rich and escaped then return to menu
        }
    }
    std::cout << "Thanks for playing!";
return 0;
}