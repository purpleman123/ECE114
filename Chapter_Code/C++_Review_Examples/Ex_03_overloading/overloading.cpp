// overloading.cpp
#include <iostream>
#include <string>
using namespace std;
 
void print(int i) {
  cout << " Here is int " << i << endl;
}
void print(double  f) {
  cout << " Here is float " << f << endl;
}

// Write an overloaded function that takes a string object!
void print(     ) {
  cout << " Here is string " <<   << endl;
}

int main() {
  print(10);
  print(10.10);
  print("ten");
}
