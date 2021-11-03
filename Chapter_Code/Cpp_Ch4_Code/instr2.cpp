// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
                            // reads through newline
                            // add this to reset the failbit
    cout << "Enter your favorite dessert:\n";
                            // read throught newline
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    return 0;
}
