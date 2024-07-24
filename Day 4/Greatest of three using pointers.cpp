#include <iostream>

int main() {
    int a, b, c;
    int *p1, *p2, *p3;

    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    int greatest = (*p1 > *p2) ? ((*p1 > *p3) ? *p1 : *p3) : ((*p2 > *p3) ? *p2 : *p3);

    std::cout << "The greatest number is: " << greatest << std::endl;

    return 0;
}

