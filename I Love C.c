/* Program to read a number from console and print "I Love C."
    that many times on the screen without quotes. */

#include <stdio.h>

void loop(int n) {
    for (int i=0; i<n; i++) {
        puts("I Love C.");
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%i", &n);
    loop(n);
    return 0;
}
