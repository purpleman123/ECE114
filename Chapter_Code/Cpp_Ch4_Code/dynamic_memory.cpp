#include <iostream>
using namespace std;

int main() {

	cout << "Enter the size of the array: ";
	int size;
	cin >> size;
	int * list = new int [size];  // size is a variable!
	/* The array created using the new operator
	   is also known as a dynamic array */

	return 0;
}
