#include <iostream>

class Example {
    int value;

public:
    Example(int val) : value(val) {}

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Example obj(10);
    Example* ptr = &obj;

    ptr->display();

    return 0;
}

