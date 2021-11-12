// workshop8_1_ref.cpp: 
#include <iostream>
#include <string>

// Complete three function prototypes
//chapter 1 to 5 on c++

int main() {
    std::cout << "Testing function overloading with add()!" << std::endl;
    std::cout << "add(1, 1) is: " << add(1, 1) << std::endl;
    std::cout << "add(1.1, 1.1) is: " << add(1.1, 1.1) << std::endl;
    std::cout << "add(\"Super\", \"Mario\") is: " << add("Super", "Mario") << std::endl;
    std::cout << "Now testing default parameters with add()!" << std::endl;
    std::cout << "add(1) is: " << add(1) << std::endl;
    std::cout << "add() is: " << add() << std::endl;
    
    return 0;
}


// overloaded functions.
// Complete three overloading functions called add
