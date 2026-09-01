#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (n): ";
    cin >> n;

    int originalArray[n];
    int reversedArray[n];

    // Input elements for the original array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> originalArray[i];
    }

    // Copy elements into the second array in reverse order
    for (int i = 0; i < n; i++) {
        reversedArray[i] = originalArray[n - 1 - i];
    }

    // Display the reversed array elements
    cout << "Reversed array copied elements: ";
    for (int i = 0; i < n; i++) {
        cout << reversedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
