// Fig.6.25: maximum.cpp from C++ How to Program (p.246)
#include <iostream>
using namespace std;
 
template <typename T> // or template <class T>
T maximum( T value1, T value2, T value3 )
{
    T maximumValue = value1; // assume value1 is maximum
    //determine whether value2 is greater than maximumValue
    if(value2 > maximumValue)
        maximumValue = value2;
    if(value3 > maximumValue)
        maximumValue = value3;
    return maximumValue;
}

int main()
{
    int int1, int2, int3;
    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;
    cout << "The maximum integer value is: " << maximum (int1, int2, int3) << endl;

    double double1, double2, double3;
    cout << "Input three double values: ";
    cin >> double1 >> double2 >> double3;
    cout << "The maximum double value is: " << maximum (double1, double2, double3) << endl;

    char char1, char2, char3;
    cout << "Input three characters: ";
    cin >> char1 >> char2 >> char3;
    cout << "The maximum character is: " << maximum (char1, char2, char3) << endl;

    return 0;
}

