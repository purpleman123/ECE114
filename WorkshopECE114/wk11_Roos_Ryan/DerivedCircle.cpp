#include "DerivedCircle.h"
#include <math.h>  
    Circle::Circle(){

    } // default constructor
    Circle::Circle(double r){

    } // non default 1
    Circle::Circle(double r, const std::string & co, bool fi){

    }
    double Circle::getRadius(){
        return radius;
    }
    void Circle::setRadius(double r){
        radius = ( r > 0 ) ? r : 0;
    }
    double Circle::getArea() const{
        return radius * radius * M_PI;
    }
    double Circle::getPerimeter() const{
        return 2 * radius * M_PI;
    }
    double Circle::getDiameter() const{
        return 2 * radius;
    }
    std::string Circle::toString() const{
        return "Circle object";
    }