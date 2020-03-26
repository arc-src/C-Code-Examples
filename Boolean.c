#include <stdio.h>

enum bool { false, true };

char* put(enum bool b) {
    if (b == false)
        return ("false");
    else
        return ("true");
}

enum bool nand(enum bool a, enum bool b) {
    if ((a == b) && (a == true))
        return false;
    return true;
}

int main() {
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("NAND(%s, %s) = %s\n", put(i), put(j), put(nand(i, j)));
        }
    }
    return 0;
}
