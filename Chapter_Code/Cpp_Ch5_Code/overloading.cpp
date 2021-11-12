// overloading.cpp
#include <iostream>
#include <string>
using namespace std;

void print(int i) {
  cout << "Here is int " << i << endl;
}
void print(double  f) {
  cout << "Here is float " << f << endl;
}

void print(string str){
	cout << "Here is str " << str << endl;
}

/*
void print(char* c) {
  cout << " Here is char* " << c << endl;
}
*/

int main() {
  char num[] = "ten";
  print(10);
  print(10.10);
  print(num);
}



