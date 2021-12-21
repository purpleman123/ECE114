// tabtenn0.cpp
#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht)
                  : firstname(fn), lastname(ln), hasTable(ht){
	           // firstname = fn;
	           // lastname = ln;
}

void TableTennisPlayer::Name() const{
       std::cout << lastname << ", " << firstname;
}


