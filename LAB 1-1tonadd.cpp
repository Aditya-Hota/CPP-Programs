#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    // Loop through all numbers from 1 up to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of all numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}
