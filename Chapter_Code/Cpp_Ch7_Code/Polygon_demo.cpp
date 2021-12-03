// Polygon_demo.cpp: Class inheritance
// redesigned by Ming-Lun Lee
#include <iostream>

// base class called Polygon
class Polygon
{
private:
    double width, height;
protected:   // try to comment out protected
    void setWidth(double w){width = w;}
    double getWidth() const {return width;}
    void setHeight(double h){height = h;}
    double getHeight() const {return height;}
public:
    Polygon(double w = 0, double h = 0): width(w), height(h) {}; // constructor
    void set_value(double w, double h){ 
       width = w;
       height = h;
    }
   // double area() const { return 0;}
   // virtual double area() const {return 0;};  // virtual member function
   virtual double area() const = 0; // pure virtual member function
};

// derived class called Rectangle
class Rectangle: public Polygon{
public:
    Rectangle(double w = 0, double h = 0): Polygon(w, h){} // constructor
    double area() const{
        return getWidth() * getHeight(); // test width * height
    }
};

// derived class called Triangle
class Triangle: public Polygon{
public:
    Triangle(double w = 0, double h = 0): Polygon(w, h){}  // constructor
    double area() const{
        return getWidth() * getHeight() * 0.5; // test width * height
    }
};

int main(int argc, char const *argv[])
{
    Rectangle rect;
    Triangle trgl;
    // Polygon poly;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    // Polygon * ppoly3 = &poly;
    ppoly1->set_value(4.5, 5.0);
    ppoly2->set_value(4.5, 5.0);
    // ppoly3->set_value(4.5, 5.0);
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << rect.area() << std::endl;
    std::cout << trgl.area() << std::endl;
    // std::cout << poly.area() << std::endl;
    std::cout << ppoly1->area() << std::endl;
    std::cout << ppoly2->area() << std::endl;
    // std::cout << ppoly3->area() << std::endl;

    return 0;
}
