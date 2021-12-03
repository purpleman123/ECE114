// Wk11.cpp, Reference Code
// Originally from "Introduction to Programming with C++", 3rd Ed., Chapter 15
// Redesigned and revised by Ming-Lun Lee
#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"
#include <iostream>
using namespace std;

void displayGeometricObject(const GeometricObject & g){
	cout << g.toString() << endl;
}

int main() {
	/* You need to comment out the shape part if you
      change the toString function in the GeometricObject class
	  to a pure virutal member function */
	
	GeometricObject shape;
	shape.setColor("red");
	shape.setFilled(true);
	cout << shape.toString() << endl
		 << " color: " << shape.getColor()
		 << " filled: " << (shape.isFilled() ? "true" : "false") << endl;
    
	Circle circle(5);
	circle.setColor("black");
	circle.setFilled(false);
	cout << circle.toString() << endl
	     << " color: " << circle.getColor()
		 << " filled: " << (circle.isFilled() ? "true" : "false")
		 << " radius: " << circle.getRadius()
		 << " area: " << circle.getArea()
		 << " perimeter: " << circle.getPerimeter() << endl;

	Rectangle rectangle(2.5, 3.2); 
	rectangle.setColor("Orange");
	rectangle.setFilled(true);
	cout << rectangle.toString() << endl
	     << " color: " << rectangle.getColor()
		 << " filled: " << (rectangle.isFilled() ? "true" : "false")
		 << " width: " << rectangle.getWidth()
		 << " height: " << rectangle.getHeight()
		 << " area: " << rectangle.getArea()
		 << " perimeter: " << rectangle.getPerimeter() << endl;


    displayGeometricObject(shape);   // comment out this later
	displayGeometricObject(circle);
	displayGeometricObject(rectangle);

	return 0;
}
