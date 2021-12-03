// fish.cpp from Sams Teach Yourself C++, p. 10.3 
#include <iostream>
using namespace std;

class Fish
{
protected:
	bool FreshWaterFish; // accessible only to derived classes
public:
	// Fish constructor
	Fish(bool IsFreshWater) : FreshWaterFish(IsFreshWater){}
	/* equivalent to
	 Fish(bool IsFreshWater)
	 {  FreshWaterFish = IsFreshWater; }
	 */
	void Swim()
	{
		if(FreshWaterFish)
			cout << "Swims in lake" << endl;
		else
            cout << "Swims in sea" << endl;
	}
};

class Tuna: public Fish
{
public:
	Tuna(): Fish(false) {}
};

class Carp: public Fish
{
public:
	Carp(): Fish(true) {}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;

	cout << "Getting my food to swim" << endl;
	cout << "Lunch: ";
	myLunch.Swim();

	cout << "Dinner: ";
	myDinner.Swim();

	// myLunch.FreshWaterFish = false // uncomment to see ...

	return 0;
}





