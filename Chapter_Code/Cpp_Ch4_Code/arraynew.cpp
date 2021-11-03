// Listing 4.18: arraynew.cpp
// Using the new operator for arrays
#include <iostream>

using namespace std;

int main()
{
   double * p3 = new double [3]; // space for 3 doubles
   p3[0] = 0.9;      // treat p3 like an array name
   p3[1] = 0.7;
   p3[2] = 2.1;
   cout << "p3[1] is " << p3[1] << ".\n";
   cout << "p3[1] is " << *(p3 + 1) << ".\n";
   p3 += 1;          // increment the pointer
   cout << "Now p3[0] is " << p3[0] << " and ";
   cout << "p3[1] is " << p3[1] << ".\n";
   cout << "Now p3[0] is " << *p3 << " and ";
   cout << "p3[1] is " << *(p3 + 1) << ".\n";
   p3 -= 1;    // comment out this
   delete [] p3;
   return 0;
}

