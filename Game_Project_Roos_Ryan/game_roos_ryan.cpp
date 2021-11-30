#include <iostream>
#include <string>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

// need to make print outs into functions, spell check!! and comment
// game instructions
// demo video
// blog post

int main(){
    char menuVar = 'p';
    char direction;
    std::string name;
    int monsterloss = 0;
    int goldnum = 0;
    int rand1, rand2, rand3, randmonster, monsterguess;
    std::cout << "***** WELCOME TO DUNGEON CRAWLER: AN ECE 114 GAME *****";
    while (menuVar == 'p'){
        std::cout << "\nEnter 'p' to play or 'q' to quit the game.\n";
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
            std::cout << name << " you will now be entering The Dungeon. . .\n==================================================================================================";
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
                    std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@*........#@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@........@@@@@@@@@%.......@@@@@@@@\n@@@@@@@@@@@@@@&...@@@@@@@@@@@@@@@@@@@@@@@@...@@@@@\n@@@@@@@@@@@@@@..@@@@@@@@@@@@@@@@@@@@@@@@@@@*..@@@@\n@@@@@@@@@@@@@@....@@@@@@@@@@@@@@@@@@@@@@@@....@@@@\n@@@@@@@@(.......@........@@@@@@@@@&.......@...@@@@\n@@@@@@...@@@@@@....%@@@@@........./@@@@@.....@@@@@\n@@@@@..(@@@@@@@@@@@.....................&@@@@@@@@@\n@@@@@....@@@@@@@@@@@@@@@@@@@@@@@@....@@@@@@@@@@@@@\n@@@@@..,@.......,@@@@@@@@*......./@...@@@@@@@@@@@@\n@@@@@@.....@@@@@@,.......@@@@@@.....@...&@@@@@@@@@\n@@@@@@@@@......................%@@@@@@&..@@@@@@@@@\n@@@@@@@@@....*@@@@@@@@@@@@@@@@@@@@@@.....@@@@@@@@@\n@@@@@@@@@..&@..........%@@%..........@...@@@@@@@@@\n@@@@@@@@@@,....@@@@@@@@&%%@@@@@@@@.....@@@@@@@@@@@\n@@@@@@@@@@@@@@@...................,@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
                    usleep(1000000);
                    std::cout << "You are one step closer to escaping The Duegon...";
                    usleep(1000000);
                }
                if (rand1 == 2){
                    rand3 = rand() % 3 + 1;
                    if (rand3 == 1){
                        randmonster = rand() % 5 + 1;
                        std::cout << "a gemlin! You must input a number between 1 and 5.\n";
                        usleep(1000000); // HERE IS WHERE THE FUNCTION NEEDS TO GO
                        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@       @@@@@@@@@@@@@@@@@@@@@@@@@@%       @@@@\n@@@@@   @#     &@@@@@@@%   @@@@@@@@(     &&   @@@@\n@@@@@   &@@@@    @@            #@@   *@@@@&   @@@@\n@@@@@   @@@@@                        *@@@@&   @@@@\n@@@@@%    @    @@@@@@@@@@@@@@@@@@@@&   @&    @@@@@\n@@@@@@@   @(   &@@@@@@@@@@@@@@@@@@@#   @@   @@@@@@\n@@@@@@@   &        @@@@@@@@@@@@@       .@   @@@@@@\n@@@@@@@@     @@@@       @@@       @@@&     @@@@@@@\n@@@@@@@@     @@@@@&   %@@@@&*  .&@@@@@    @@@@@@@@\n@@@@@@@@@@    @@@@@@@@  @@@ #@@@@@@@@   %@@@@@@@@@\n@@@@@@@@@@@    @@@@@@@@@@@@@@@@@@@@&   (@@@@@@@@@@\n@@@@@@@@@@@@&   @@& @  %  *, .( @@/   @@@@@@@@@@@@\n@@@@@@@@@@@@@@    @@@*       %@@&   *@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@     @@@@@@&@@    *&@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@             @@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@(. ,#@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
                        usleep(1000000);
                        std::cout << "If your number matches the gremlin you lose one monster life, if your number does not match you win 2 gold!\nInput here: ";
                        std::cin >> monsterguess;
                        fflush(stdin);
                        while (monsterguess < 1 || monsterguess > 10){
                            std::cout << "Wrong input! Make sure it is between 1 and 5.\nInput here: ";
                            std::cin >> monsterguess;
                            fflush(stdin);
                        }
                        if (randmonster == monsterguess){
                            std::cout << ". . .";
                            usleep(1000000);
                            std::cout << " Oh no! Your number matches the gremlin, you have lost one 1 life!";
                            usleep(1000000);
                            monsterloss++;
                        }
                        else{
                            std::cout << ". . .";
                            usleep(1000000);
                            std::cout << " Yay! You have won 2 gold for beating the gremlin.";
                            usleep(1000000);
                            goldnum = goldnum + 2;
                        } 
                    }
                    if (rand3 == 2){
                        randmonster = rand() % 3 + 1;
                        std::cout << "a demon! You must input a number between 1 and 3.\n";
                        usleep(1000000); // FUNCTION HERE
                        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@&   *@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@     @@@@@@@@@@        @@@@@@@@@@@@@\n@@@@@@@@@@@  &@@@@@@@@@@@@@@@@@@@@@@@@&   @@@@@@@@\n@@@@@@@@/  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  @@@@@\n@@@@@@@  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  @@@\n@@@@@@  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@\n@@@@@  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@& @\n@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @\n@@@  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  @\n@@  @     .@@@@@@        @@@@@@@@@@@@@@@@@@@@@@  @\n@@ @         @@@             @@@@@@@@@@@@@@@@@  @@\n@@ @        @@@@@              @@@@@@@@@@@@@@@  @@\n@@ %@     @@@@@@@@             @@@@@@@@@@@@@@  @@@\n@@@ @@@@@@@    @@@@@          @@@@@@@@@@@@@@  @@@@\n@@@ @@@@@@       @@@@@@@@@@@@@@@@@@@@   @%  @@@@@@\n@@@/    @@@  @@ &@@@@@@@@@@@@@    @      @@@@@@@@@\n@@@@@@  @@@@@@@@@@@@@@@@@@@@  &@@@   @@@@@@@@@@@@@\n@@@@@@# @@ @ @@@@@@@@@@  @  @@@@@  @@@@@@@@@@@@@@@\n@@@@@@@                  @@@@@@@. @@@@@@@@@@@@@@@@\n@@@@@@@ @ @@ @, @( @, @@@@@@@@@& &@@@@@@@@@@@@@@@@\n@@@@@@@ ,@@@@@@@@@@@@@@@@@@@@  ,@@@@@@@@@@@@@@@@@@\n@@@@@@@@  @@@@@@@@@@@@@@    @@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
                        usleep(1000000);
                        std::cout << "If your number matches the demon you lose one monster life, if your number does not match you win 3 gold!\nInput here: ";
                        std::cin >> monsterguess;
                        fflush(stdin);
                        while (monsterguess < 1 || monsterguess > 5){
                            std::cout << "Wrong input! Make sure it is between 1 and 3.\nInput here: ";
                            std::cin >> monsterguess;
                            fflush(stdin);
                        }
                        if (randmonster == monsterguess){
                            std::cout << ". . .";
                            usleep(1000000);
                            std::cout << " Oh no! Your number matches the demon, you have lost one 1 life!";
                            usleep(1000000);
                            monsterloss++;
                        }
                        else{
                            std::cout << ". . .";
                            usleep(1000000);
                            std::cout << " Yay! You have won 3 gold for beating the demon.";
                            usleep(1000000);
                            goldnum = goldnum + 3;
                        } 
                    }
                    if (rand3 == 3){
                        randmonster = rand() % 2 + 1;
                        std::cout << "a Duegon Boss! You must input 1 or 2.\n";
                        usleep(1000000);
                        std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@     @@@@@@@@@@@@@*  /@@@@@@@@@@@@@@\n@@@@@@@@@@@@         @@@@@@@@@         @@@@@@@@@@@\n@@@@@@@@@@&     @@@@@  @@@@@@    *  *  @@@@@@@@@@@\n@@@@@@@@@    @@@@@@@@@@  .@      __   @@@@@@@@@@@@\n@@@@@@@    ,@@@@@@@@@@@@@            @@@@@@@@@@@@@\n@@@@@@    @@@@@@@@@@@@@@@@           .@@@@@@@@@@@@\n@@@@@   @@@@@@@@@@@@@@@@@             @@@@@@@@@@@@\n@@@@   @@@@@@@@@@@@@@@@               @@@@@@@@@@@@\n@@@   @@@@@@@@@@@@@@@@@@              @@@@@@@@@@@@\n@@   @@@@@@@@@@@@@@@@@@@@@             @@@@@@@@@@@\n@@  @@@@@@@@@@@@@@@@@@@@@             #   @@@@@@@@\n@@ @@@@@@@@@@@@@@@@@@@@@@              @@   @@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@              @@@@@  @@@@\n@@@@@@@@@@@@@@@@@@@@@@@@               @@@@@@@  %@\n@@@@@@@@@@@@@@@@@@@@@@@@               @@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@                @@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@                @@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@                ,@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@                 @@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@                  @@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@                   @@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
                        usleep(1000000);
                        std::cout << "If your number matches the Duegon Boss you lose one monster life, if your number does not match you win 4 gold!\nInput here: ";
                        std::cin >> monsterguess;
                        fflush(stdin);
                        while (monsterguess < 1 || monsterguess > 2){
                            std::cout << "Wrong input! Make sure it is 1 or 2.\nInput here: ";
                            std::cin >> monsterguess;
                            fflush(stdin);
                        }
                        if (randmonster == monsterguess){
                            std::cout << ". . .";
                            usleep(1000000);
                            std::cout << " Oh no! Your number matches the Duegon Boss, you have lost one 1 life!";
                            usleep(1000000);
                            monsterloss++;
                        }
                        else{
                            std::cout << ". . .";
                            usleep(1000000);
                            std::cout << " Yay! You have won 4 gold for beating the Duegon Boss.";
                            usleep(1000000);
                            goldnum = goldnum + 2;
                        } 
                    }  
                }
                std::cout << "\nGold: " << goldnum << "\nLives: " << 3-monsterloss << "\n==================================================================================================";
            }
            if (monsterloss == 3){
                std::cout << "\nNoooooo! This was your third and final chance. You have perished in the great duegon of doom!\n";
                usleep(1000000);
                std::cout << "Your bones will warn other adventures of the dangers for hundreds of years . . .";
            }
            else{
                std::cout << "\nYou did it! With piles of gold in your backpack you have finally escaped the duegon!";
                usleep(1000000);
                std::cout << "Back at home you enjoy a life of luxury til the end of your days. . .";
            }
        }
    monsterloss = 0;
    goldnum = 0;
    }
    std::cout << "Thanks for playing!";
return 0;
}