#include <iostream>

int main() {
    int arr[5];
    int *ptr = arr;

    std::cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> *(ptr + i);
    }

    std::cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}

