#include <iostream>
using namespace std;

int main() {
    int num;
    int reversedNum = 0;

    cout << "Enter a number to reverse: ";
    cin >> num;

    int temp = num; // Keep original value intact for output

    // Execute code block at least once using a do-while loop
    do {
        int remainder = temp % 10;
        reversedNum = (reversedNum * 10) + remainder;
        temp /= 10;
    } while (temp > 0);

    cout << "The reverse of " << num << " is: " << reversedNum << endl;
    return 0;
}
