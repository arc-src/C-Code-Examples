#include <iostream>
#include <string>
using namespace std;

string strtimeconv(string s) {
    string t;
    string hh;
    hh += s[0];
    hh += s[1];

    if (s[8] == 'P') {
        if (hh.compare("12") == 0)
            t += "12";
        else {
            if (hh[0] == '0')
                t += '1';
            else
                t += '2';
            int h = int(s[1]) + 2;
            t += h;
        }
    } else {
        if (hh.compare("12") == 0)
            t += "00";
        else
            t += hh;
    }

    for (int i=2; i<8; i++)
        t += s[i];

    return t;
}

int main() {
    string t;
    while (true) {
        cin >> t;
        cout << strtimeconv(t) << endl;
    }
    return 0;
}
