#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("%d is NOT a perfect number.\n", num);
        return 0;
    }

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }

    return 0;
}