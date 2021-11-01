#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    cout << "Given the length of the side the area is: " << sqrt(area) << endl;
    return 0; // std::cout is an OBJECT not a function or class
}
