#include <iostream>
#include <string>

using namespace std;

// Base class
class Employee {
protected:
    string name;
    int id;
    double basicSalary;

public:
    Employee(const string& name, int id, double basicSalary)
        : name(name), id(id), basicSalary(basicSalary) {}

    void displayEmployeeDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

// Derived class
class Payroll : public Employee {
private:
    double grossPay;
    double netPay;
    double taxRate; // Assume a fixed tax rate for simplicity

public:
    Payroll(const string& name, int id, double basicSalary, double taxRate)
        : Employee(name, id, basicSalary), taxRate(taxRate) {
        calculatePay();
    }

    void calculatePay() {
        // For simplicity, let's assume allowances are 20% of basic salary and deductions are 10% of basic salary
        double allowances = 0.20 * basicSalary;
        double deductions = 0.10 * basicSalary;

        grossPay = basicSalary + allowances;
        netPay = grossPay - deductions - (grossPay * taxRate);
    }

    void displayPayrollDetails() const {
        displayEmployeeDetails();
        cout << "Gross Pay: " << grossPay << endl;
        cout << "Net Pay: " << netPay << endl;
    }
};

int main() {
    // Creating an employee object
    Payroll employee("John Doe", 12345, 50000.0, 0.10); // 10% tax rate
    employee.displayPayrollDetails();

    return 0;
}
