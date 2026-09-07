#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    
    cout << "Enter elements for a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "\nUpper Triangle Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j) {
                cout << matrix[i][j] << "\t";
            } else {
                cout << "\t"; 
            }
        }
        cout << endl;
    }

    return 0;
}
