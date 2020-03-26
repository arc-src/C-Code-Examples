#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float val;
    printf("Enter the number of elements: ");
    scanf("%i", &n);

    float* ar = malloc(sizeof(float) * n);
    for (int i=0; i<n; i++) {
        printf("Enter the value of element %i: ", i);
        scanf("%f", &val);
        ar[i] = val;
    }

    printf("The elements are ");
    for (int i=0; i<n; i++) {
        printf("%.2f ", ar[i]);
    }

    free(ar);

    return 0;
}
