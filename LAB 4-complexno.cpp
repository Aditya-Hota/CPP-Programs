#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Constructor to initialize values
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Declaration of friend function
    friend Complex addComplex(const Complex& c1, const Complex& c2);
};

// Definition of friend function
Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex num1(5, 4), num2(3, 7);

    cout << "First Complex Number: ";
    num1.display();

    cout << "Second Complex Number: ";
    num2.display();

    Complex result = addComplex(num1, num2);
    cout << "Sum: ";
    result.display();

    return 0;
}
