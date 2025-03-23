#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2 || num == 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void print_primes_up_to_N(int N) {
    printf("Prime numbers up to %d:\n", N);
    for (int i = 2; i <= N; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    print_primes_up_to_N(n);
    return 0;
}