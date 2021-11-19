#include <string>

class Predator{
private:
    std::string name;
    int height, weight, length, speed, killerRating;
public:
Predator(const std::string & n = "No Name", int h = 0, int w = 0, int l = 0, int s = 0, int k = 0);
    void setName(std::string n);
    std::string getName();
    void setHeight(int h);
    int getHeight();
    void setWeight(int w);
    int getWeight();
    void setLength(int l);
    int getLength();
    void setSpeed(int s);
    int getSpeed();
    void setKillerRating(int k);
    int getKillerRating();
    void show();
};