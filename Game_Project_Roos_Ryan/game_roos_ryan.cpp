#include <iostream>
#include <string>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char menuVar = 'p';
    char direction;
    std::string name;
    int monsterloss = 0;
    int goldnum = 0;
    int rand1, rand2, rand3;
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
            std::cout << name << " you will now be entering The Dungeon. . .\n====================================================================================";
            while (monsterloss < 3 && goldnum < 10){
                srand(time(NULL));
                // direction choose
                std::cout << "\nChoose which path forward you wish to take, enter 'f' for forward, 'r' for right, and 'l' for left.\n";
                std::cin >> direction;
                fflush(stdin);
                // INPUT VAL

                // random free gold or monster
                if ( direction == 'f'){
                    std::cout << name << " moves forward in the dugeon, in this next room you find ";
                }
                if ( direction == 'r'){
                    std::cout << name << " moves right in the dugeon, in this next room you find ";
                }
                if ( direction == 'l'){
                    std::cout << name << " moves left in the dugeon, in this next room you find ";
                }
                rand1 = rand() % 2 + 1;
                if (rand1 == 1){
                    rand2 = rand() % 4 + 2; // may need to lower amount given
                    std::cout << "free gold! Good choice " << name << " you have found " << rand2 << " coins!\n";
                    goldnum = goldnum + rand2;
                }
                if (rand1 == 2){
                    rand3 = rand() % 3 + 1;
                    std::cout << rand3;
                }
                // bring up monster picture and allow input to see if win or lose, then award gold

                // read out outcome of turn and repeat
                usleep(1000000);
                std::cout << "You are one step closer to escaping The Duegon...";
                usleep(1000000);
            }
            // if monsterloss is 3 read out how you died in the duegon and return to menu

            // if goldnum is 10 or more explain how you are rich and escaped then return to menu
        }
    }
    std::cout << "Thanks for playing!";
return 0;
}