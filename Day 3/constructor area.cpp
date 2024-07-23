#include <iostream>
#include <cmath>

class Shape {
private:
    std::string shape;
    double side;
    double radius;
    double height;

public:
    // Constructor for cube
    Shape(double side) : side(side), radius(0), height(0), shape("cube") {}

    // Constructor for cylinder
    Shape(double radius, double height) : side(0), radius(radius), height(height), shape("cylinder") {}

    // Method to calculate volume
    double volume() const {
        if (shape == "cube") {
            return std::pow(side, 3);
        } else if (shape == "cylinder") {
            return M_PI * std::pow(radius, 2) * height;
        } else {
            return 0.0;
        }
    }
};

int main() {
    // Create a cube with side length 3
    Shape cube(3);
    std::cout << "The volume of the cube is: " << cube.volume() << std::endl;

    // Create a cylinder with radius 2 and height 5
    Shape cylinder(2, 5);
    std::cout << "The volume of the cylinder is: " << cylinder.volume() << std::endl;

    return 0;
}

