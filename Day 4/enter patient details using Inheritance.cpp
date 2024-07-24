#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    void setPersonalInfo(std::string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonalInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Patient : public Person {
    std::string disease;
    std::string doctorName;

public:
    void setPatientInfo(std::string d, std::string doc) {
        disease = d;
        doctorName = doc;
    }

    void displayPatientInfo() {
        displayPersonalInfo();
        std::cout << "Disease: " << disease << ", Doctor: " << doctorName << std::endl;
    }
};

int main() {
    Patient patient;
    patient.setPersonalInfo("John Doe", 45);
    patient.setPatientInfo("Flu", "Dr. Smith");

    patient.displayPatientInfo();

    return 0;
}

