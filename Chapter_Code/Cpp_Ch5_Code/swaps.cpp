// Listing 8.4:
// swaps.cpp -- swapping with references and with pointers
#include <iostream>
                               // a, b are aliases for ints
                               // p, q are addresses of ints
                               // a, b are new variables
int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(          );   // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    swapp(           ); // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Trying to use passing by value:\n";
    swapv(             );   // pass values of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    return 0;
}

void swapr(int & a, int & b)    // use references
{
    int temp = a;
    a = b;
    b = temp;
}

void swapp(int * p, int * q)    // use pointers
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv()        // try using values
{
      


}

