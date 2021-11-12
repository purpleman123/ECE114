// Fig.6.25: maximum.cpp from C++ How to Program (p.246)
#include <iostream>
using namespace std;

// Complete the template function here!
template <typename T>
int main()
{
    int int1, int2, int3;
    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;
    cout << "The maximum integer value is: " << maximum (int1, int2, int3);

    double double1, double2, double3;
    cout << "\nInput three double values: ";
    cin >> double1 >> double2 >> double3;
    cout << "The maximum double value is: " << maximum (double1, double2, double3);

    char char1, char2, char3;
    cout << "\nInput three characters: ";
    cin >> char1 >> char2 >> char3;
    cout << "The maximum character is: " << maximum (char1, char2, char3);

    return 0;
}

