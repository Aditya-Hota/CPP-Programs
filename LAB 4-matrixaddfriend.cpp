#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];

public:
    void input() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Declaration of friend function
    friend Matrix addMatrix(const Matrix& m1, const Matrix& m2);
};

// Definition of friend function
Matrix addMatrix(const Matrix& m1, const Matrix& m2) {
    Matrix temp;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            temp.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }
    return temp;
}

int main() {
    Matrix A, B, C;

    cout << "Enter elements for a 2x2 Matrix A:\n";
    A.input();

    cout << "Enter elements for a 2x2 Matrix B:\n";
    B.input();

    C = addMatrix(A, B);

    cout << "\nMatrix A:\n"; A.display();
    cout << "\nMatrix B:\n"; B.display();
    cout << "\nResultant Sum Matrix C:\n"; C.display();

    return 0;
}
