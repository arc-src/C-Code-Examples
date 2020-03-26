#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

typedef vector<vector<double>> MAT2D;

MAT2D dot(MAT2D a, MAT2D b) {
    MAT2D r;

    /* If any of the following conditions is true,
        multiplication cannot be done. */
    if (a.size() == 0)
        throw(1);
    if (b.size() == 0)
        throw(2);
    if (a[0].size() == 0)
        throw(3);
    if (b[0].size() == 0)
        throw(4);
    if (a[0].size() != b.size())
        throw(5);

    r.resize(a.size());
    for (int i=0; i<a.size(); i++)
        r[i].resize(b[0].size());

    for (int i=0; i<a.size(); i++) {
        for (int j=0; j<b[0].size(); j++) {
            for (int k=0; k<b.size(); k++) {
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return r;
}

int main() {
    int ar, br, ac, bc;
    cout << "Enter the number of rows in the matrix A: ";
    cin >> ar;
    cout << "Enter the number of columns in the matrix A: ";
    cin >> ac;
    cout << "Enter the number of rows in the matrix B: ";
    cin >> br;
    cout << "Enter the number of columns in the matrix B: ";
    cin >> bc;

    MAT2D a, b, r;

    a.resize(ac);
    for (int i=0; i<ac; i++) {
        a[i].resize(ar);
        for (int j=0; j<ar; j++) {
            printf("Enter the value of element (%i, %i) of matrix A: ", i, j);
            cin >> a[i][j];
        }
    }

    b.resize(bc);
    for (int i=0; i<bc; i++) {
        b[i].resize(br);
        for (int j=0; j<br; j++) {
            printf("Enter the value of element (%i, %i) of matrix B: ", i, j);
            cin >> b[i][j];
        }
    }

    r = dot(a, b);

    cout << endl << "A = " << endl;
    for (int i=0; i<a.size(); i++) {
        for (int j=0; j<a[0].size(); j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "B = " << endl;
    for (int i=0; i<b.size(); i++) {
        for (int j=0; j<b[0].size(); j++) {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "R = " << endl;
    for (int i=0; i<r.size(); i++) {
        for (int j=0; j<r[0].size(); j++) {
            cout << r[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
