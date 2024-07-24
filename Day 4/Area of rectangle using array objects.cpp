#include <iostream>

class Rectangle {
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }
};

int main() {
    Rectangle rects[3] = { {2.0, 3.0}, {4.0, 5.0}, {6.0, 7.0} };

    for(int i = 0; i < 3; i++) {
        std::cout << "Area of rectangle " << (i+1) << ": " << rects[i].area() << std::endl;
    }

    return 0;
}

