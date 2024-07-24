#include <iostream>

class Base1 {
protected:
    int num1;

public:
    Base1(int n1) : num1(n1) {}
};

class Base2 {
protected:
    int num2;

public:
    Base2(int n2) : num2(n2) {}
};

class Derived : public Base1, public Base2 {
public:
    Derived(int n1, int n2) : Base1(n1), Base2(n2) {}

    int sum() {
        return num1 + num2;
    }
};

int main() {
    Derived obj(5, 10);
    std::cout << "Sum: " << obj.sum() << std::endl;
    return 0;
}

