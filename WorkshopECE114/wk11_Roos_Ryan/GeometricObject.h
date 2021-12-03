// GeometricObject.h

#ifndef GEOMETRICOBJECT_H_
#define GEOMETRICOBJECT_H_
#include <string>

class GeometricObject {
private:
	std::string color;     // The color of the object (default: white)
	bool filled;           // Indicates whether the object is filled with a color (default: false)
public:
	GeometricObject();     // Creates a Geometric Object
	GeometricObject(const std::string & co, bool fi); // Creates a GeometricObject with the specified color and filled values
	std::string getColor() const; // Returns the color
	void setColor(const std::string & co);   // Sets a new color
	bool isFilled() const;    // Returns the filled property
	void setFilled(bool fi);   // Sets a new filled property
	std::string toString() const;  // Returns a string representation of this object
	// virtual std::string toString() const = 0;
};

#endif /* GEOMETRICOBJECT_H_ */
