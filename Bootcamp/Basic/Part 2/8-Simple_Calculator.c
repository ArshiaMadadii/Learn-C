#include <stdio.h>

int main() {
    int num1, num2;
    float result;
    char opp;

   
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &opp);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (opp) {
        case '*':
            result = num1 * num2;
            printf("\n%d * %d = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("\n%d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;

        case '+':
            result = num1 + num2;
            printf("\n%d + %d = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("\n%d - %d = %.2f\n", num1, num2, result);
            break;

        default:
            printf("\nError: Invalid operator.\n");
            break;
    }

    return 0;
}