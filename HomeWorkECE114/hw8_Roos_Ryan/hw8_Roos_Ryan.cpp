#include <iostream>

//need to make struct for a player

int main(int argc, char const *argv[]){
    using namespace std;
    int playernum;
    int counter = 0;
    cout << "Enter number of players (max. 100): ";
    cin >> playernum;
    //while(cin.get() != '\n'){continue;}
    while (playernum < 1 || playernum > 100){
        cout << "Wrong input! Enter again: ";
        cin >> playernum;
       // while(cin.get() != '\n'){continue;}
    }
}