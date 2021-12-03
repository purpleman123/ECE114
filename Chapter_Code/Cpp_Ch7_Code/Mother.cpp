// Mother.cpp
#include <iostream>
using namespace std;

class Mother{
public:
	Mother() {
		cout << "Mother: no parameters.\n";
	}
	Mother(int a){
		cout << "Mother: int parameters.\n";
	}
};

class Daughter : public Mother {
public:
	Daughter(int a) {
		cout << "Daughter: int parameters.\n\n";
	}
};

class Son : public Mother {
public:
	Son(int a) : Mother(a) {
		cout << "Son: int paramters.\n\n";
	}
};


int main() {
	Daughter Kelly(0);
	Son Sid(0);
	return 0;
}
