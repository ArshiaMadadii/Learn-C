#include <stdio.h>

int main() {
    int num;
    printf("Please enter n: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int j = 0;
    int k = 1;

    printf("Fibonacci sequence up to %d terms:\n", num);

    for (int i = 0; i < num; i++) {
        printf("%d ", j);
        int next = j + k;
        j = k;
        k = next;
    }

    printf("\n");
    return 0;
}