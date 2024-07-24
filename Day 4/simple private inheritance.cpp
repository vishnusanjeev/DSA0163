#include <iostream>

class Base {
private:
    int privateValue;

public:
    Base(int val) : privateValue(val) {}

    void display() const {
        std::cout << "Base class privateValue: " << privateValue << std::endl;
    }
};

class Derived : private Base {
public:
    Derived(int val) : Base(val) {}

    void show() {
        display();  // Accessing the Base class method
    }
};

int main() {
    Derived obj(10);
    obj.show();
    return 0;
}

