#include <iostream>
#include <string>

// Root Base Class
class Person {
protected:
    std::string name;
public:
    Person(std::string n) : name(n) {
        std::cout << "Person Constructor Called for: " << name << "\n";
    }
};

// Derived Class 1: Uses virtual inheritance
class Teacher : virtual public Person {
protected:
    std::string employeeID;
public:
    Teacher(std::string n, std::string empID) : Person(n), employeeID(empID) {}
};

// Derived Class 2: Uses virtual inheritance
class StudentUser : virtual public Person {
protected:
    std::string studentID;
public:
    StudentUser(std::string n, std::string studID) : Person(n), studentID(studID) {}
};

// Final Composite Class: Hybrid Inheritance (Diamond structure resolved)
class TeachingAssistant : public Teacher, public StudentUser {
public:
    // Virtual base class constructor must be initialized directly by the most derived class
    TeachingAssistant(std::string n, std::string empID, std::string studID)
        : Person(n), Teacher(n, empID), StudentUser(n, studID) {}

    void displayTARecord() const {
        std::cout << "\n--- TA Record Summary ---\n"
                  << "Name: " << name << "\n" // Accessible ambiguity-free due to virtual keyword
                  << "Teacher ID: " << employeeID << "\n"
                  << "Student ID: " << studentID << "\n";
    }
};

int main() {
    std::cout << "\n--- 5) Hybrid Inheritance Demo ---\n";
    TeachingAssistant ta("Dr. John Doe Jr.", "T9982", "S10443");
    ta.displayTARecord();
    return 0;
}
