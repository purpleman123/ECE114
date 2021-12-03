#include "GeometricObject.h"
class Circle : public GeometricObject {
private:
    // data member
    double radius;
public:
    // three constructors
    Circle(); // default constructor
    Circle(double r); // non default 1
    Circle(double r, const std::string & co, bool fi);
    double getRadius();
    void setRadius(double r);
    double getArea() const;
    double getPerimeter() const;
    double getDiameter() const;
    std::string toString() const;
    // member functions here 
    // getRadius, setRadius, getArea, getPerimeter
    // getDiameter, toString
};