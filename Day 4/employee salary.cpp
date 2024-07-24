#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int employeeID;

public:
    Employee(std::string n, int id) : name(n), employeeID(id) {}

    void displayEmployeeInfo() {
        std::cout << "Name: " << name << ", Employee ID: " << employeeID << std::endl;
    }
};

class Salary {
protected:
    double basicSalary;

public:
    Salary(double sal) : basicSalary(sal) {}

    double getBasicSalary() {
        return basicSalary;
    }
};

class Bonus : public Employee, public Salary {
    double bonus;

public:
    Bonus(std::string n, int id, double sal, double b) : Employee(n, id), Salary(sal), bonus(b) {}

    void displayTotalSalary() {
        displayEmployeeInfo();
        std::cout << "Basic Salary: $" << basicSalary << ", Bonus: $" << bonus << ", Total Salary: $" << (basicSalary + bonus) << std::endl;
    }
};

int main() {
    Bonus emp("John Doe", 1001, 5000.0, 500.0);
    emp.displayTotalSalary();

    return 0;
}

