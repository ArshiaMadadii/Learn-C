#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;

    printf("Please enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %llu\n", number, factorial);

    return 0;
}