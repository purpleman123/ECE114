// car.cpp: A class Car Related to class Motor via Private Inheritance
#include <iostream>
using namespace std;

class Motor
{
public:
	void SwitchIgnition()
	{
		cout << "Ignition ON" << endl;
	}
	void PumpFuel()
	{
		cout << "Fuel in cylinders" << endl;
	}
	void FireCylinders()
	{
		cout << "Vroooom"  << endl;
	}
};

class Car: private Motor
{
public:
	void Move()
	{
		SwitchIgnition();
		PumpFuel();
		FireCylinders();
	}
};

int main()
{
	Car myDreamCar;
	myDreamCar.Move();
	// myDreamCar.PumpFuel();  // add this line
	return 0;
}


