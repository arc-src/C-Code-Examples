#include <stdio.h>

int main() {
    double p;
    float n, r;
    printf("Enter Principal Amount: ");
    scanf("%d", &p);
    printf("Enter Rate Percentage per annum: ");
    scanf("%f", &r);
    printf("Enter Time in months: ");
    scanf("%f", &n);

    double deposited = p * n, interest = p * r * n * (n + 1) / 2400;
    double amount = deposited + interest;
    printf("Amount: %d", amount);
    return 0;
}
