#include <iostream>
#include <iomanip>

//Program function: ask user how many players between 1 and 100, then input name and age for each player, then finally print out players youngest to oldest in a table

//player struct created here
struct PLAYER{
    std::string name;
    int age;
};
int main(int argc, char const *argv[]){
    using namespace std;
    int playernum, i;
    int counter = 0;
    int counter2 = 0;
    int sorted = 0;
    // user inputs number of players here and the input is validated
    cout << "Enter number of players (max. 100): ";
    cin >> playernum;
    cin.clear();
    while(cin.get() != '\n')
        continue;
    while (playernum < 1 || playernum > 100){
        cout << "Wrong input! Enter again: ";
        cin >> playernum;
        cin.clear();
        while(cin.get() != '\n')
            continue;
    }

    struct PLAYER players[playernum];
    // this loop will loop for the desired number of players while allowing the user to input a name and age into each player struct in the array
    while (counter < playernum){
        cout << "=== Player #" << counter+1 << " ===\n";
        cout << "Name: ";
        getline(cin, players[counter].name);
        cout << "Age: ";
        cin >> players[counter].age;
        cin.clear();
        while(cin.get() != '\n') // age validated here
            continue;
        while (players[counter].age < 1){
            cout << "Wrong input! Enter again: ";
            cin >> players[counter].age;
            cin.clear();
            while(cin.get() != '\n')
                continue;
        }
        counter++;
    }
    //loop to print out all names
    cout << "\n=======================================\n";
    cout << "| Name                          | Age |\n";
    cout << "=======================================\n";
    //sorting loop
    while(counter2 < playernum){
        for (int x = 0; x< playernum; x++){
            if(abs(players[x].age-100) > sorted){
                sorted = abs(players[x].age-100);
                i = x;
            }
            else{
                continue;
            }
        }
        cout << "| "; 
        cout << left << setw(30) << setfill(' ') << players[i].name; // using c++ formatting fuctions to output properly no matter age or name length
        cout << "| ";
        cout << left << setw(3) << setfill(' ') << players[i].age << " |\n";
        sorted = 0;
        players[i].age = 100;
        counter2++;
    }
    cout << "=======================================";
return 0;
}