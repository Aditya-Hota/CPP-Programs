#include <iostream>
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
