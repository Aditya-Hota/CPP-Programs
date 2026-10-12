#include <iostream>
#include <string>

// Grandparent Class
class Student {
protected:
    std::string name;
public:
    Student(std::string n) : name(n) {}
};

// Parent Class (Inherits from Student)
class Undergraduate : public Student {
protected:
    double gpa;
public:
    Undergraduate(std::string n, double g) : Student(n), gpa(g) {}
};

// Child Class (Inherits from Undergraduate) - 3-tier hierarchy completed
class GraduatingSenior : public Undergraduate {
public:
    GraduatingSenior(std::string n, double g) : Undergraduate(n, g) {}

    void determineHonors() const {
        std::cout << "Student: " << name << " | GPA: " << gpa << "\nGraduation Status: ";
        if (gpa >= 3.8) std::cout << "Summa Cum Laude\n";
        else if (gpa >= 3.5) std::cout << "Magna Cum Laude\n";
        else std::cout << "Graduate\n";
    }
};

int main() {
    std::cout << "\n--- 3) Multi-level Inheritance Demo ---\n";
    GraduatingSenior senior("Alice Smith", 3.85);
    senior.determineHonors();
    return 0;
}
