#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%i", &n);

    double val;
    double* ar = malloc(sizeof(double) * n);

    for (int i=0; i<n; i++) {
        printf("Enter the value of element %i: ", i);
        scanf("%d", &val);
        ar[i] = val;
    }

    double sum = 0;
    for (int i=0; i<n; i++) {
        sum += ar[i];
    }

    printf("Mean = %d", sum / (float)n);

    free(ar);
    return 0;
}
