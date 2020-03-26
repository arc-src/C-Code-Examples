#include <stdio.h>

int main() {
    double n1, n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2) {
        printf("%d is greater than %d.", n1, n2);
    } else if (n1 < n2) {
        printf("%d is less than %d.", n1, n2);
    } else {
        printf("They are equal.");
    }

    return 0;
}
