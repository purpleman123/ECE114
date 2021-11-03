// push_back1.cpp: using vector::push_back
// from http://www.cplusplus.com/reference/vector/vector/push_back/
// revised by Ming-Lun Lee
#include <iostream>
#include <vector>
#include <string>  // for the string class

int main ()
{
  std::vector<std::string> myvector; // empty vector object
  std::string myString;
  std::cout << "Please enter some strings (enter q to end):\n";
  do {
    std::cin >> myString;
    myvector.push_back(myString); // add a new element
  } while(myString != "q");
  myvector.pop_back();  // remove the last element 0
  std::cout << "myvector stores " << int(myvector.size()) << " strings:\n";
  for(int i = 0; i < myvector.size(); i++)
  {
	  std::cout << myvector[i] << ' ';
  }
  std::cout << std::endl;
  return 0;
}
