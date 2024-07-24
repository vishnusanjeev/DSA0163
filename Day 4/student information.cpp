#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;
};

class Student : public Person {
public:
    std::string studentID;

    void getInfo() {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        std::cout << "Enter age: ";
        std::cin >> age;
        std::cin.ignore(); 
        std::cout << "Enter student ID: ";
        std::getline(std::cin, studentID);
    }

    void displayInfo() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Student ID: " << studentID << "n";
    }
};

int main() {
    Student student;
    student.getInfo();
    student.displayInfo();
    return 0;
}
