// array_vector_comp1.cpp
#include <iostream>
using namespace std;

int main() {
	size_t size = 10;
	int sarray[size];
	// dynamic memory allocation with new
	// do something with them:
	for(int i = 0; i < size; ++i){
	    sarray[i] = i;
	    darray[i] = i;
	}
	for(int i = 0; i < size; ++i){
	    cout << "sarray[" << i << "] == " << sarray[i] << endl;
	    cout << "darray[" << i << "] == " << darray[i] << endl;
	}

	// don't forget to delete darray when you're done
	// release memory with delete here

	return 0;
}





