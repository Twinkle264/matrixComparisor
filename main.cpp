#include <iostream>

using namespace std;

bool is_equal(int matrix[][4], int matrix2[][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (matrix[i][j] != matrix2[i][j]) return false;
        }
    }
    return true;
}

void diagonalMatrix(int matrix[][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i != j) matrix[i][j] = 0;
        }
    }
}

int main() {
    int a[4][4];
    int b[4][4];

    for (int k = 0; k < 2; ++k) {
        if (k == 0) {
            cout << "Enter the values of the first matrix: " << endl;
        } else if (k == 1) {
            cout << "Enter the values of the second matrix: " << endl;
        }
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                k == 0 ? cin >> a[i][j] : cin >> b[i][j];
            }
        }
    }


    if (is_equal(a, b)) {
        cout << endl << "Equal" << endl;
        cout << endl;
        diagonalMatrix(a);

        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                cout << a[i][j] << '\t';
            }
            cout << endl;
        }
    } else {
        cout << endl << "Not equal" << endl;
        cout << endl;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                cout << a[i][j] << '\t';
            }
            cout << "    ";
            for (int j = 0; j < 4; ++j) {
                cout << b[i][j] << '\t';
            }
            cout << endl;
        }
        return 0;
    }
    cout << endl;

    return 0;
}
