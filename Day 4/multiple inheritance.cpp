#include <iostream>

class Base1 {
public:
    void displayBase1() {
        std::cout << "Base1 display method" << std::endl;
    }
};

class Base2 {
public:
    void displayBase2() {
        std::cout << "Base2 display method" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        std::cout << "Derived display method" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.displayBase1();
    obj.displayBase2();
    obj.displayDerived();
    return 0;
}

