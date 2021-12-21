// rectangle.cpp
// pointers to base class
#include <iostream>
using namespace std;

class Polygon
{
  protected:
    double width, height;
  public:
    void set_values(double a, double b)
      { width = a; height = b; }
     // pure virtual member function => abstract class (pure virtual class)
};

class Rectangle
{
  public:
   
};

class Triangle
{
  public:

};

int main ()
{
  Rectangle rect;
  Triangle trgl;
  // Polygon poly;



  cout << fixed;
  cout.precision(2);
  
  // area

  return 0;
}
