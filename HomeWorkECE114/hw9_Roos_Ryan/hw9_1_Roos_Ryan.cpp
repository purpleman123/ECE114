#include <iostream>
#include <cstdlib>
#include <vector>
// still need to make it work right when rounds are greater then number of bulbs
// need to add input validation for command line arguments

enum {FILENAME, NUMOFBULBS, NUMOFITEERATIONS, ARGCOUNT};

int main(int argc, char const *argv[]){
    int numOfBulbs;
    int numOfIterations;
    int finalBulb=0;
    int counter1 = 0;
    int counter2 = 1;
    int counter3 = 0;
    
    if(argc != ARGCOUNT){
        std::cout << "***Bulb Switcher***\n";
        std::cout << "Usage: " << argv[FILENAME] << " NumberOfBulbs NumberOfIterations\n";
        exit(EXIT_FAILURE);
    }
    
    if ( atoi(argv[NUMOFBULBS]) <= 0 && atoi(argv[NUMOFITEERATIONS]) > 0){
        std::cout << "The number of bulbs has to be a positive integer.\n";
        exit(EXIT_FAILURE);
    }
    if ( atoi(argv[NUMOFBULBS]) > 0 && atoi(argv[NUMOFITEERATIONS]) <= 0){
        std::cout << "The number of iterations has to be a positive integer.";
        exit(EXIT_FAILURE);
    }
    if ( atoi(argv[NUMOFBULBS]) <= 0 && atoi(argv[NUMOFITEERATIONS]) <= 0){
        std::cout << "The number of bulbs has to be a positive integer.\n";
        std::cout << "The number of iterations has to be a positive integer.";
        exit(EXIT_FAILURE);
    }

    numOfBulbs = std::stoi(argv[NUMOFBULBS], nullptr, 10);
    numOfIterations = std::stoi(argv[NUMOFITEERATIONS], nullptr, 10);

    
    if (numOfBulbs <= 0 && numOfIterations > 0){
        std::cout << "The number of bulbs has to be a positive integer.\n";
        exit(EXIT_FAILURE);
    }
    if (numOfIterations <= 0 && numOfBulbs > 0){
        std::cout << "The number of iterations has to be a positive integer.";
        exit(EXIT_FAILURE);
    }
    if (numOfIterations <= 0 && numOfBulbs <= 0){
        std::cout << "The number of bulbs has to be a positive integer.\n";
        std::cout << "The number of iterations has to be a positive integer.";
        exit(EXIT_FAILURE);
    }

    std::cout << "Number of Bulbs: " << numOfBulbs << "\n";
    std::cout << "Number of Iterations: " << numOfIterations << "\n";
    std::vector <bool> lightbulbs(numOfBulbs, false);

    for (int i = 0; i <= numOfIterations; i++){
        if (i != 0){ 
            while (counter1 != numOfBulbs){
                if(counter2 == i || counter2 == (i % numOfBulbs) || (i % numOfBulbs) == 0){
                    // set the location marked by a third counter to its opposite
                    lightbulbs[counter3] = !lightbulbs[counter3];
                    counter2 = 0;
                }
                if (counter3 == numOfBulbs-1)
                {
                    counter3 = 0;
                }
                counter1++;
                counter2++;
                counter3++;
            }
            counter1 = 0;
            counter2 = 1;
            counter3 = 0;
        }

        std::cout << "Round " << i << ": [";
        for (int k = 0; k < numOfBulbs; k++){
            if (lightbulbs[k] == 0){
                std::cout << "off";
            }
            else{
                std::cout << "on";
            }
            if (k != numOfBulbs-1){
                std::cout << ", ";
            }
            
        }
        
        std::cout << "]\n";
    }
    // final bulb count output
    for (int j = 0; j < numOfBulbs; j++){
        if (lightbulbs[j] == 1){
            finalBulb++;
        } 
    }
    if (finalBulb == 1){
        std::cout << finalBulb << " bulb is on.\n";
    }
    else{
        std::cout << finalBulb << " bulbs are on.\n";
    }
return 0;
}