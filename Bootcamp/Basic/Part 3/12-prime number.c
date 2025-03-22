#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    int isPrime = 1;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                printf("%d / %d = %d, not a prime number!\n", num, i, num / i);
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number!\n", num);
    } else {
        printf("%d is not a prime number!\n", num);
    }

    return 0;
}