#include <string>

class stock
{
    private:
    // idk why we are doing this, i type to to appear busy
    // lol get memed on my boy
    // EHEHEHEHHEEHHEEH KEKW sheare sthe ththththt
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val;}

    public:
    
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double pr);
    void sell(long num, double pr);
    void update(double pr);
    void show();
};