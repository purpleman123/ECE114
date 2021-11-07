#include <iostream>
#include <string.h>

//change name[] to string and all assocated things
// add loop to make name spacing right
// add loop to make age spacing right
// make names output youngest to oldest
// LOOK UP NEW C++ FORMATTING MIGHT MAKE IT EASIER

struct PLAYER{
    char name[30];
    int age;
};

int main(int argc, char const *argv[]){
    using namespace std;
    int playernum;
    int counter = 0;
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

    while (counter < playernum){
        cout << "=== Player #" << counter+1 << " ===\n";
        cout << "Name: ";
        cin >> players[counter].name;
        while(cin.get() != '\n')
            continue;
        cout << "Age: ";
        cin >> players[counter].age;
        cin.clear();
        while(cin.get() != '\n')
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
    for (int i = 0; i < playernum; i++){
        cout << "| " << players[i].name;
        cout << "| " << players[i].age << "  |\n";
    }
    
    cout << "=======================================";

return 0;
}