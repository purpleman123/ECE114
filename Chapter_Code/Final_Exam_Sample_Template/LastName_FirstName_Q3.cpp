// LastName_FirstName_Q3.cpp (updated it with your first name and last name.)
#include <iostream>
#include "Burger.h"

int main() {
	using namespace std;
	Burger special;
    special.show();

    special.setName("ECE114 Premium Burger");
    special.setPrice(8.99);
    special.setNumber(58);
    special.setTax(0.08);
    special.show();

    Burger chicken("Chicken Burger", 3.99, 0.08);
    chicken.setNumber(15);
    chicken.show();

    Burger cheeseburger("Cheeseburger", 5.49, 0.08, 45);
    cheeseburger.show();

    cout << fixed;
    cout.precision(2);
    std::cout << "Total cost (plus tax): " << special.getSubtotal()
    		+ chicken.getSubtotal() + cheeseburger.getSubtotal() << endl;

	return 0;
}
