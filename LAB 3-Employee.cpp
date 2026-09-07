#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string name, code, designation;
    int experience, age;

    // Input employee information
    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Employee Code: ";
    getline(cin, code);

    cout << "Enter Designation: ";
    getline(cin, designation);

    cout << "Enter Years of Experience: ";
    cin >> experience;

    cout << "Enter Age: ";
    cin >> age;

    // Display employee information
    cout << "\n--- Employee Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Code: " << code << endl;
    cout << "Designation: " << designation << endl;
    cout << "Experience: " << experience << " years" << endl;
    cout << "Age: " << age << " years" << endl;

    return 0;
}
