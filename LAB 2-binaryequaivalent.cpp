#include <iostream>
using namespace std;

int main() {
    int num;
    int binaryNum[32]; // Array to store binary digits (up to 32 bits)
    int i = 0;

    cout << "Enter a decimal number: ";
    cin >> num;

    // Handle case if input is 0
    if (num == 0) {
        cout << "Binary equivalent: 0" << endl;
        return 0;
    }

    // Convert decimal to binary by storing remainders
    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print the binary array in reverse order
    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;

    return 0;
}
