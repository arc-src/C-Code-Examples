#include <iostream>
using namespace std;

class TempConv {
private:
    float C2F(float f) { return (f * 9 / 5) + 32; }
    float F2C(float f) { return (f - 32) / 9 * 5; }
    float C2K(float f) { return f + 273; }
    float K2C(float f) { return f - 273; }
    float F2K(float f) { return C2K(F2C(f)); }
    float K2F(float f) { return C2F(K2C(f)); }
public:
    TempConv() {
        int n;
        float t;
        while (true) {
            cout << "Temperature Converter" << endl
                 << "*******************************" << endl
                 << "1. Celcius To Fahrenheit" << endl
                 << "2. Fahrenheit To Celcius" << endl
                 << "3. Celcius To Kelvin" << endl
                 << "4. Kelvin To Celcius" << endl
                 << "5. Fahrenheit To Kelvin" << endl
                 << "6. Kelvin To Fahrenheit" << endl
                 << "7. Exit" << endl
                 << "Enter your choice: ";
            cin >> n;

            if ((1 <= n) && (n <= 6)) {
                cout << "Enter Temperature: ";
                cin >> t;
                cout << "Resultant Temperature is ";
                switch (n) {
                    case 1: cout << C2F(t); break;
                    case 2: cout << F2C(t); break;
                    case 3: cout << C2K(t); break;
                    case 4: cout << K2C(t); break;
                    case 5: cout << F2K(t); break;
                    case 6: cout << K2F(t);
                }
                cout << endl;
            } else if (n == 7) {
                exit(0);
            } else {
                cout << "Wrong Choice" << endl;
            }

            cout << endl;
        }
    }
};

int main() {
    TempConv tempconv;
    return 0;
}
