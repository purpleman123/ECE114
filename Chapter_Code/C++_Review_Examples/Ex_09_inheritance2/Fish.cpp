// Fish.cpp
#include <iostream>
using namespace std;

class Fish{     // base class
protected:
	bool FreshWaterFish;
public:
	Fish(bool IsFreshWater) : FreshWaterFish(IsFreshWater){} // constructor
	void Swim() {
		if(FreshWaterFish)
		   cout << "Swims in lake" << endl;
		else
		   cout << "Swims in sea" << endl;
	}
};

class Tuna: public Fish{
public:
	Tuna(): Fish(false){};  // constructor of the Tuna class
	void Swim(){
		cout << "Tuna swims really fast" << endl;
		Fish::Swim();
	}
};

class Carp: public Fish{
public:
	Carp(): Fish(true){};   // constructor of the Carp class
	void Swim(){
		cout << "Carp swims really slow" << endl;
		Fish::Swim();
	}
};

int main() {
	Carp myLunch;
	Tuna myDinner;
	cout << "Getting my food to swim"  << endl;
	cout << "Lunch: ";
	myLunch.Swim();

	cout << "Dinner: ";
	myDinner.Swim();
//	myDinner.Fish::Swim();
	return 0;
}
