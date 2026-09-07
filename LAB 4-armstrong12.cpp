#include <iostream>
#include <cmath>
using namespace std;

class Armstrong {
private:
    int num;

public:
    // Parameterized constructor to initialize the value
    Armstrong(int n) {
        num = n;
    }

    // Copy constructor
    Armstrong(const Armstrong &obj) {
        num = obj.num;
    }

    void check() {
        int originalNum = num;
        int temp = num;
        int remainder, result = 0, digits = 0;

        // Count number of digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        // Compute Armstrong sum
        while (temp != 0) {
            remainder = temp % 10;
            result += round(pow(remainder, digits));
            temp /= 10;
        }

        if (result == originalNum)
            cout << originalNum << " is an Armstrong number." << endl;
        else
            cout << originalNum << " is not an Armstrong number." << endl;
    }
};

int main() {
    int inputNum;
    cout << "Enter an integer: ";
    cin >> inputNum;

    Armstrong firstObj(inputNum);       // Uses Parameterized Constructor
    Armstrong copiedObj = firstObj;     // Uses Copy Constructor

    copiedObj.check();                  // Tests the copied value
    return 0;
}
