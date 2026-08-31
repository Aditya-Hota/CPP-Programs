#include <iostream>
using namespace std;

// Function that accepts an argument and returns a value
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num > 0) {
        int remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int number;
    cout << "Enter a number to reverse: ";
    cin >> number;

    // Call function and pass argument
    int result = reverseNumber(number);

    cout << "Reversed number: " << result << endl;
    return 0;
}
