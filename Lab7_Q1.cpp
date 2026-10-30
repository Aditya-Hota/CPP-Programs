#include <iostream>
#include <iomanip>
using namespace std;

class Calendar {
    int year;

    bool isLeapYear() {
        return (year % 400 == 0) ||
               (year % 4 == 0 && year % 100 != 0);
    }

    int getDays(int month) {
        int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

        if (month == 1 && isLeapYear())
            return 29;

        return days[month];
    }

    int getStartDay(int month) {
        // Zeller's congruence: Sunday = 0
        int m = month + 1;
        int y = year;

        if (m < 3) {
            m += 12;
            y--;
        }

        int k = y % 100;
        int j = y / 100;

        int h = (1 + (13 * (m + 1)) / 5 +
                 k + k / 4 + j / 4 + 5 * j) % 7;

        return (h + 6) % 7;
    }

public:
    void inputYear() {
        cout << "Enter year: ";
        cin >> year;
    }

    void displayCalendar() {
        string months[] = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"
        };

        for (int m = 0; m < 12; m++) {
            cout << "\n\n      " << months[m]
                 << " " << year << "\n";
            cout << "Sun Mon Tue Wed Thu Fri Sat\n";

            int start = getStartDay(m);

            for (int i = 0; i < start; i++)
                cout << "    ";

            for (int d = 1; d <= getDays(m); d++) {
                cout << setw(3) << d << " ";

                if ((start + d) % 7 == 0)
                    cout << "\n";
            }
        }

        cout << "\n";
    }
};

int main() {
    Calendar c;
    c.inputYear();
    c.displayCalendar();

    return 0;
}