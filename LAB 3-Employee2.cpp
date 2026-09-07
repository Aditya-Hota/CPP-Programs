#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string code;
    string designation;

public:
    // Nested Inner Class to handle salary components
    class Salary {
    private:
        double basicPay;
        double ta;
        double da;
        double hra;
        double grossPay;

    public:
        void inputSalary() {
            cout << "Enter Basic Pay: ";
            cin >> basicPay;
            
            // Calculate allowances based on basic pay percentages
            ta = 0.10 * basicPay;   // 10%
            da = 0.12 * basicPay;   // 12%
            hra = 0.20 * basicPay;  // 20%
            grossPay = basicPay + ta + da + hra;
        }

        void displaySalary() {
            cout << "Basic Pay: $" << basicPay << endl;
            cout << "TA (10%): $" << ta << endl;
            cout << "DA (12%): $" << da << endl;
            cout << "HRA (20%): $" << hra << endl;
            cout << "Gross Salary: $" << grossPay << endl;
        }
    };

    // Creating an object of the nested class inside the outer class
    Salary empSalary;

    void inputEmployeeDetails() {
        cout << "Enter Employee Name: ";
        cin.ignore(); // Clears input buffer
        getline(cin, name);
        
        cout << "Enter Employee Code: ";
        getline(cin, code);
        
        cout << "Enter Designation: ";
        getline(cin, designation);
        
        // Call the nested class input function
        empSalary.inputSalary();
    }

    void displayEmployeeDetails() {
        cout << "\n===============================" << endl;
        cout << "       EMPLOYEE DETAILS        " << endl;
        cout << "===============================" << endl;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        
        // Call the nested class display function
        empSalary.displaySalary();
        cout << "===============================" << endl;
    }
};

int main() {
    Employee emp;
    
    // Read information from keyboard
    emp.inputEmployeeDetails();
    
    // Display the information
    emp.displayEmployeeDetails();
    
    return 0;
}
