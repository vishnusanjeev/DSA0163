#include <iostream>
using namespace std;

const double PI = 3.14159;

// Base class
class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

// Derived class from Shape
class Circle : public Shape {
protected:
    double radius;
public:
    void getRadius() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    double area() {
        return PI * radius * radius;
    }

    void display() {
        cout << "Area of the circle: " << area() << endl;
    }
};
class Rectangle : public Circle {
protected:
    double length, width;
public:
    void getDimensions() {
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
    }

    double area() {
        return length * width;
    }

    void display() {
        cout << "Area of the rectangle: " << area() << endl;
    }
};

// Derived class from Rectangle
class Cylinder : public Rectangle {
protected:
    double height;
public:
    void getHeight() {
        cout << "Enter height of the cylinder: ";
        cin >> height;
    }

    double volume() {
        return PI * radius * radius * height;
    }

    void display() {
        cout << "Volume of the cylinder: " << volume() << endl;
    }
};

int main() {
    Cylinder cylinder;

    // Circle area
    cylinder.getRadius();
    cylinder.Circle::display();

    // Rectangle area
    cylinder.getDimensions();
    cylinder.Rectangle::display();

    // Cylinder volume
    cylinder.getHeight();
    cylinder.display();

    return 0;
}

