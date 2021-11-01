// Listing 3.8: floatnum.cpp
// floating-point types
#include <iostream>

using namespace std;

int main()
{
                  //setting up fixed-point here 
    float tub = 10.0 / 3.0; // good to about 6 places
    double mint = 10.0 / 3.0; // good to about 15 places
    const float million = 1.0e6; // 1000000

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    return 0;
}



