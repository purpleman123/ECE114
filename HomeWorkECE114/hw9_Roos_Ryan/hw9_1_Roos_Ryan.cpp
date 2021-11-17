#include <iostream>
#include <cstdlib>
#include <vector>

enum {FILENAME, NUMOFBULBS, NUMOFITEERATIONS, ARGCOUNT};

int main(int argc, char const *argv[]){
    int numOfBulbs;
    int numOfIterations;
    if(argc != ARGCOUNT){
        std::cout << "***Bulb Switcher***\n";
        std::cout << "Usage: " << argv[FILENAME] << " NumberOfBulbs NumberOfIterations\n";
        exit(EXIT_FAILURE);
    }
    numOfBulbs = std::stoi(argv[NUMOFBULBS], nullptr, 10);
    numOfIterations = std::stoi(argv[NUMOFITEERATIONS], nullptr, 10);

    std::cout << "Number of Bulbs: " << numOfBulbs << "\n";
    std::cout << "Number of Iterations: " << numOfIterations << "\n";
    std::vector <bool> lightbulbs(numOfBulbs, false);

    for (int i = 0; i <= numOfIterations; i++){
        if (i != 0){
           // loop to change lights
           
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
return 0;
}