/* Program to calculate simple interest */

#include <stdio.h>

int main() {
    double p;
    float t, r;
    printf("Enter the principal, rate percentage per annum and time in years: ");
    scanf("%d%f%f", &p, &r, &t);
    printf("Simple Interest = %d", p * r * t / 100);
    return 0;
}
