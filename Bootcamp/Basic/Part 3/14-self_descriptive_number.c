#include <stdio.h>
#include <string.h>

int main() {
    char number[100];
    printf("Enter a number: ");
    scanf("%s", number);

    int length = strlen(number);
    int isSelfDescriptive = 1;

    for (int i = 0; i < length; i++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (number[j] - '0' == i) {
                count++;
            }
        }
        if (count != number[i] - '0') {
            isSelfDescriptive = 0; 
            break;
        }
    }

    if (isSelfDescriptive) {
        printf("%s is a self-descriptive number.\n", number);
    } else {
        printf("%s is NOT a self-descriptive number.\n", number);
    }

    return 0;
}