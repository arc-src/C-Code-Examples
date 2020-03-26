/* Program to print ASCII Table */

#include <stdio.h>

int main() {
    for (int i=0; i<255; i++) {
        printf("%i: %c\n", i, (char)i);
    }
    return 0;
}
