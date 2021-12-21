// platypus.cpp: multiple inheritance
#include <iostream>
using namespace std;

class Mammal
{
public:
	void FeedBabyMilk()
	{ cout<< "Mammal: Baby says glug!" << endl;}
};

class Reptile
{
public:
	void SpitVenom()
	{ cout << "Reptile: Shoo enemy! Spits venom!" << endl;}
};

class Bird
{
public:
	void LayEggs()
	{ cout << "Bird: Laid my eggs, am lighter now!" << endl;}
};

class Platypus     // inherits from Mammal, Reptile, and Bird
{
public:
	void Swim()
	{ cout << "Platypus: Voila, I can swim!" << endl;}
};

int main()
{


	return 0;
}

