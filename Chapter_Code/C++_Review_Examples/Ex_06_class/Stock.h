// Stock.h
// try not to use namespace std in a header file
#ifndef STOCK_H_
#define STOCK_H_
#include <string>

class Stock {  // class declaration
// three access modifiers
private:
	std::string company;
	long shares; // number of shares
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val;} // function definition
public:
    Stock(const std::string & co = "no company", long n = 0, double pr = 0); // a non-default constructor
    // Stock(); // a default constructor
    ~Stock(); // a default destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
//protected:
};

#endif /* STOCK_H_ */
