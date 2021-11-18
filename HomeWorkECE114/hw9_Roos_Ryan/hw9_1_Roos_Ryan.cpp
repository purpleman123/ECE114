// Ryan Roos 11/18/21
// hw9_1
#include <iostream>
#include <cstdlib>
#include <vector>
// overall this program will take in a number of bulbs and number of rounds from the command line
// then it will print out the results of flipping switches based on round number

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
    
    if ( atoi(argv[NUMOFBULBS]) <= 0 && atoi(argv[NUMOFITEERATIONS]) > 0){  // these are the exit conditions if the arguments are not numbers
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

    
    if (numOfBulbs <= 0 && numOfIterations > 0){  // these are the exit conditions if the arguments are equal to or less then zero
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

    for (int i = 0; i <= numOfIterations; i++){  // below is the loop for flipping the light bulbs
        if (i != 0){                             // counter 1 is the overall counter, counter 2 is the one that gets reset when a light is switched and counter 3 resets when the end of the vector is reached
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

        std::cout << "Round " << i << ": ["; // print out each round in the right format
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