#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void displayInfo() {
        cout << "This is a shape." << endl;
    }
};

// Intermediate class
class TwoDimensionalShape : public Shape {
public:
    void areaOfCircle(float radius) {
        float area = 3.14159 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    void areaOfRectangle(float length, float width) {
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

// Derived class
class Cylinder : public TwoDimensionalShape {
public:
    void volumeOfCylinder(float radius, float height) {
        float volume = 3.14159 * radius * radius * height;
        cout << "Volume of Cylinder: " << volume << endl;
    }
};

int main() {
    Cylinder cylinder;

    // Display basic info
    cylinder.displayInfo();
    cout << endl;

    // Calculate and display areas and volume
    cylinder.areaOfCircle(5.0);
    cylinder.areaOfRectangle(4.0, 6.0);
    cylinder.volumeOfCylinder(5.0, 10.0);

    return 0;
}

