// tabtenn1.h


#ifndef TABTENN1_H_
#define TABTENN1_H_
#include "tabtenn0.h"

class RatedPlayer : public TableTennisPlayer{
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string & fn = "none",
			    const string & ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
	unsigned int Rating() const {return rating;}
	void ResetRating(unsigned int r) {rating = r;}
};

#endif /* TABTENN1_H_ */
