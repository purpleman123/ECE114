// push_back.cpp: using vector::push_back
// from http://www.cplusplus.com/reference/vector/vector/push_back/
// revised by Ming-Lun Lee
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector; // empty vector object
  int myint;
  std::cout << "Please enter some integers (enter 0 to end):\n";
  do {
    std::cin >> myint;
                         // add a new element using pushback
  } while(myint);
                        // remove the last element 0
  std::cout << "myvector stores " << int(            ) << " numbers:\n";
  for(int i = 0; i <           ; i++)
  {
	  std::cout << myvector[i] << ' ';
  }
  std::cout << std::endl;
  return 0;
}

