// GeometricObject.cpp

#include "GeometricObject.h"

GeometricObject::GeometricObject() : color("white"), filled(false){}     // Creates a Geometric Object

GeometricObject::GeometricObject(const std::string & co, bool fi){ // Creates a GeometricObject with the specified color and filled values
    color = co;
    filled = fi;
}

std::string GeometricObject::getColor() const { // Returns the color
    return color;
}

void GeometricObject::setColor(const std::string & co){   // Sets a new color
    color = co;
}

bool GeometricObject::isFilled() const {   // Returns the filled property
    return filled;
}

void GeometricObject::setFilled(bool fi){  // Sets a new filled property
    filled = fi;
}


std::string GeometricObject::toString() const{ // Returns a string representation of this object
    return "Geometric Object";
}

