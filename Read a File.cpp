#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "Usage: a.exe [filename]" << endl;
        exit(0);
    }

    ifstream f;
    f.open(argv[1]);
    if (!f.is_open()) {
        cout << "Error: Failed to read the file." << endl;
        exit(1);
    }

    string c, ln;
    while (getline(f, ln))
        c += ln + '\n';

    cout << c << endl;

    f.close();
    return 0;
}
