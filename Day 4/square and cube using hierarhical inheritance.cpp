#include <iostream>

class Number {
protected:
    int num;

public:
    void setNumber(int n) {
        num = n;
    }
};

class Square : public Number {
public:
    int getSquare() {
        return num * num;
    }
};

class Cube : public Number {
public:
    int getCube() {
        return num * num * num;
    }
};

int main() {
    Square squareObj;
    Cube cubeObj;

    int number = 3;
    squareObj.setNumber(number);
    cubeObj.setNumber(number);

    std::cout << "Square of " << number << " is: " << squareObj.getSquare() << std::endl;
    std::cout << "Cube of " << number << " is: " << cubeObj.getCube() << std::endl;

    return 0;
}

