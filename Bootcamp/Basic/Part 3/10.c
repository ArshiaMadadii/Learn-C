#include <stdio.h>

int main() {
    int num;
    printf("Please enter n: ");
    scanf("%d", &num);

    // Print the header
    printf("  X |");
    for (int i = 1; i <= num; i++) {
        printf("%4d |", i); // Adjust width for alignment
    }
    printf("\n");

    // Print a separator line
    printf("-----");
    for (int i = 1; i <= num; i++) {
        printf("------");
    }
    printf("\n");

    // Print the multiplication table
    for (int j = 1; j <= num; j++) {
        printf("%3d |", j); // Row number with fixed width
        for (int i = 1; i <= num; i++) {
            printf("%4d |", i * j); // Multiplication result with fixed width
        }
        printf("\n");

        // Print a separator line after each row (optional)
        if (j < num) {
            printf("-----");
            for (int i = 1; i <= num; i++) {
                printf("------");
            }
            printf("\n");
        }
    }

    return 0;
}