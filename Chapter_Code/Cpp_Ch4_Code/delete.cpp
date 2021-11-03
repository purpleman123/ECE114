// Listing 4.22: delete.cpp
// modified by Ming-Lun Lee
#include <iostream>
#include <cstring>    // or string.h
using namespace std;
char * getname(void); // function prototype

int main()
{
    char * name;      // create pointer but no storage
    name = getname(); // assign address of a string to name
    cout << name << " at " << &name << endl;
    delete [] name;   // memory freed

    name = getname(); // reuse freed memory
    cout << name << " at " << &name << endl;
    delete [] name;   // memory freed

    return 0;
}

char * getname(void)   // return pointer to new string
{
    char temp[80];    // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp); // copy string into smaller space

    return pn;
}


