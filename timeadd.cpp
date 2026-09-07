#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    void display() const {
        cout << hours << " hrs : " << minutes << " mins" << endl;
    }

    // Declaration of friend function
    friend Time addTime(const Time& t1, const Time& t2);
};

// Definition of friend function handling 60-minute overflow logic
Time addTime(const Time& t1, const Time& t2) {
    Time temp;
    temp.minutes = t1.minutes + t2.minutes;
    temp.hours = t1.hours + t2.hours + (temp.minutes / 60); 
    temp.minutes = temp.minutes % 60; // Keep minutes under 60
    return temp;
}

int main() {
    Time time1(5, 40), time2(2, 35);

    cout << "Time 1: ";
    time1.display();

    cout << "Time 2: ";
    time2.display();

    Time finalTime = addTime(time1, time2);
    cout << "Total Summed Time: ";
    finalTime.display();

    return 0;
}
