#include <iostream>
#include <string>

class Student {
protected:
    std::string name;
    int rollNumber;

public:
    void setDetails(std::string n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayDetails() {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber << std::endl;
    }
};

class Report : public Student {
    int marks[5];

public:
    void setMarks(int m[]) {
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    void displayReport() {
        displayDetails();
        std::cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            std::cout << marks[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Report report;
    report.setDetails("Alice", 101);

    int marks[] = {80, 85, 90, 75, 95};
    report.setMarks(marks);

    report.displayReport();

    return 0;
}

