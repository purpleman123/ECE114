// push_back2.cpp: using vector::push_back
// from http://www.cplusplus.com/reference/vector/vector/push_back/
// revised by Ming-Lun Lee
#include <iostream>
#include <vector>
#include <string>  // for the string class

int main ()
{
  std::vector<std::string> myvector; // empty vector object
  myvector.push_back("I");
  myvector.push_back("like");
  myvector.push_back("ECE114.");
  std::cout << "myvector stores " << int(myvector.size()) << " strings:\n";
  for(int i = 0; i < myvector.size(); i++)
  {
	  std::cout << myvector[i] << ' ';
  }
  std::cout << std::endl;
  return 0;
}
