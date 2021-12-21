// main.cpp
#include <iostream>
#include "Stock.h"   // do not use <Stock.cpp>

int main(){
	const int STKS = 4;
	Stock stocks[STKS] = {   // an array of 4 Stock objects
	   Stock("NanoSmart", 12, 20),
	   Stock("Boffo Objects", 200, 2.0),
	   Stock("Monolithic Obelisks", 130, 3.25),
	   Stock("Fleep Enterprises", 60, 6.5)
	}; 
	std::cout << "Stock holdings:\n";
	int st;
	for(st = 0; st < STKS; st++)
		stocks[st].show();
	const Stock * top = &stocks[0]; // top is a pointer to a temp Stock object
	for(st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);
	std::cout << "\n Most valuable holding:\n";
	    top->show();
    return 0;
}
/*
	{
	using std::cout;
	cout << "Using constructors to create new objects\n";
	Stock stock1("NanoSmart", 12, 20.0); // syntax #1
	// Stock stock1("Apple", 10);  // missing default constructor
    // Stock stock1(); // This is a function prototype
	stock1.show();
	Stock stock2 = Stock("Boffo Objects", 2, 2.0); // syntax #2
	stock2.show();
	cout << "Using a constructor to reset an object\n";
	stock1 = Stock("Nifty Foods", 10, 50.0);
	cout << "Revised stock1:\n";
	stock1.show();
	cout << "Done\n";
	}
*/
/*
	cout << "Assign stock1 to stock2:\n";
	stock2 = stock1;
	cout << "Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();
	*/
	/*
    Stock fluffy_the_cat;  // an object of the Stock class
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000, 0.125);
    fluffy_the_cat.show(); 
	return 0;
}
*/



