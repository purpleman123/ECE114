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
    virtual double area() = 0; // pure virtual member function => abstract class (pure virtual class)
};

class Rectangle: public Polygon
{
  public:
    double area()
      { return width * height; }
};

class Triangle: public Polygon
{
  public:
    double area()
      { return width * height / 2; }
};

int main ()
{
  Rectangle rect;
  Triangle trgl;
  // Polygon poly;

  Polygon * ppoly1 = &rect;
  Polygon * ppoly2 = &trgl;
 // Polygon * ppoly3 = &poly;

  ppoly1->set_values(4.5, 5.0);
  ppoly2->set_values(4.5, 5.0);
 // ppoly3->set_values(4.5, 5.0);

  cout << fixed;
  cout.precision(2);

  cout << ppoly1->area() << '\n';
  cout << ppoly2->area() << '\n';
//  cout << ppoly3->area() << '\n';
  return 0;
}
