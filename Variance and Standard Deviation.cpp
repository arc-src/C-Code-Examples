// Program to calculate Mean, Variance and Standard Deviation

#include <iostream>
#include <cmath>
using namespace std;

double mean(double* ar, int n) {
    double sum = 0;
    for (int i=0; i<n; i++)
        sum += ar[i];
    return sum / n;
}

double variance(double* ar, int n, double mean) {
    double v = 0;
    for (int i=0; i<n; i++)
        v += (mean - ar[i])*(mean - ar[i]);
    return v / n;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double val;
    double* ar = new double(n);
    for (int i=0; i<n; i++) {
        cout << "Enter the value of element " << i << ": ";
        cin >> val;
        ar[i] = val;
    }

    double mean = ::mean(ar, n);
    double variance = ::variance(ar, n, mean);
    double deviation = sqrt(variance);

    cout << "Mean = " << mean << endl
         << "Variance = " << variance << endl
         << "Standard Deviation = " << deviation << endl;

    delete ar;
    return 0;
}
