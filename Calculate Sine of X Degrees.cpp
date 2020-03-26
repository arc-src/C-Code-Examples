#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    while (true) {
        cout << "X = ";
        cin >> x;
        cout << "sin(x) = " << sin(x * 0.01745329251994329576923690768489) << endl << endl;
    }
    return 0;
}
