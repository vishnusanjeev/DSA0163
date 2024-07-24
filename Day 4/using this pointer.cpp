#include <iostream>

class Example {
    int value;

public:
    Example(int val) : value(val) {}

    void setValue(int val) {
        this->value = val;
    }

    void display() const {
        std::cout << "Value: " << this->value << std::endl;
    }
};

int main() {
    Example obj(10);
    obj.display();

    obj.setValue(20);
    obj.display();

    return 0;
}

