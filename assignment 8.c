#include <stdio.h>

void swap(double *a, double *b) {
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double x, y;

    printf("Enter the first number: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &y) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("\nBefore Swapping:\n");
    printf("First number=%.10g, Second number=%.10g\n", x, y);

    swap(&x, &y);

    printf("\nAfter Swapping:\n");
    printf("First number=%.10g, Second number=%.10g\n", x, y);

    return 0;
}