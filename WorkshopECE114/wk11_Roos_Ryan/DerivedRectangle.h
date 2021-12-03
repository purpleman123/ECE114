#include "GeometricObject.h"
class Rectangle : public GeometricObject {
private:
    // data member
    double height;
    double width;
public:
    // three constructors
    Rectangle(); // default constructor
    Rectangle(double height, double width); // non default 1
    Rectangle(double height, double width, const std::string & co, bool fi);
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


//define all functions, in header

// How to run 
// g++ -o Lee_MingLun_Q3 INSERT ALL .cpp HERE