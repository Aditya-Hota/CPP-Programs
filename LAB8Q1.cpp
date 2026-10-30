#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    string rollNo;
    int n;
    string subjects[10];
    float marks[10];
    float cgpa;

public:
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        getline(cin, rollNo);

        cout << "Enter number of subjects (1-10): ";
        cin >> n;

        if (n < 1 || n > 10) {
            cout << "Invalid number of subjects!\n";
            n = 0;
            return;
        }

        cin.ignore(10000, '\n');

        for (int i = 0; i < n; i++) {
            cout << "Enter subject " << i + 1 << " name: ";
            getline(cin, subjects[i]);

            cout << "Enter marks: ";
            cin >> marks[i];
            cin.ignore(10000, '\n');
        }

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void display() const {
        cout << "\n----- Student Information -----\n";
        cout << "Name: " << name << '\n';
        cout << "Roll Number: " << rollNo << '\n';

        cout << "\nSubject-wise Marks:\n";
        for (int i = 0; i < n; i++) {
            cout << subjects[i] << ": "
                 << fixed << setprecision(2)
                 << marks[i] << '\n';
        }

        cout << "CGPA: " << fixed
             << setprecision(2) << cgpa << '\n';
    }
};

int main() {
    Student s;
    s.input();
    s.display();

    return 0;
}