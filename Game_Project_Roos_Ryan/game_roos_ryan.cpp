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
    int rand1, rand2, rand3, randmonster;
    std::cout << "***** WELCOME TO DUNGEON CRAWLER: AN ECE 114 GAME *****\n";
    while (menuVar == 'p'){
        std::cout << "Enter 'p' to play or 'q' to quit the game.\n";
        std::cin >> menuVar;
        fflush(stdin);
        while (menuVar != 'p' && menuVar != 'q'){
            std::cout << "Wrong input! Make sure it is p or q:\n";
            std::cin >> menuVar;
            fflush(stdin);
        }
        if (menuVar == 'q'){
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
                std::cout << "\nChoose which path forward you wish to take, enter 'f' for forward, 'r' for right, and 'l' for left:\n";
                std::cin >> direction;
                fflush(stdin);
                while (direction != 'f' && direction != 'r' && direction != 'l'){
                    std::cout << "Wrong input! Make sure it is f, r or l:\n";
                    std::cin >> direction;
                    fflush(stdin);
                }
                if (direction == 'f'){
                    std::cout << name << " moves forward in the dugeon, in this next room you find ";
                }
                if (direction == 'r'){
                    std::cout << name << " moves right in the dugeon, in this next room you find ";
                }
                if (direction == 'l'){
                    std::cout << name << " moves left in the dugeon, in this next room you find ";
                }
                rand1 = rand() % 2 + 1;
                if (rand1 == 1){
                    rand2 = rand() % 3 + 1;
                    if ( rand2 == 1){
                        std::cout << "free gold! Good choice " << name << " you have found " << rand2 << " coin!\n";
                    }
                    else{
                        std::cout << "free gold! Good choice " << name << " you have found " << rand2 << " coins!\n";
                    }
                    goldnum = goldnum + rand2;
                    usleep(1000000);
                    std::cout << "You are one step closer to escaping The Duegon...";
                    usleep(1000000);
                }
                if (rand1 == 2){
                    rand3 = rand() % 3 + 1;
                    if (rand3 == 1){
                        // 1 to 10
                        // print out monster picture
                        // take user input
                        // INPUT VAL
                        // tell if win and reward based on diffcuilty 
                        // same for other 2 
                    }
                    if (rand3 == 2){
                        // 1 to 5
                    }
                    if (rand3 == 3){
                        // 1 or 2
                    }  
                }

                std::cout << "\nGold: " << goldnum << "\nLives: " << 3-monsterloss << "\n";
            }
            // if monsterloss is 3 read out how you died in the duegon and return to menu

            // if goldnum is 10 or more explain how you are rich and escaped then return to menu
        }
    }
    std::cout << "Thanks for playing!";
return 0;
}