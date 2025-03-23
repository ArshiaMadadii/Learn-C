#include <stdio.h>
#include <stdbool.h>

bool checkAdvisors(int num, int divisor) {
    if (num % divisor == 0) {
        return true;
    }
    return false;
}

int SumOfAdvisors(int inpNum) {
    int i, sum = 0; 
    for (i = 1; i <= inpNum; i++) {
        if (checkAdvisors(inpNum, i)) { 
            sum += i; 
        }
    }
    return sum;
}

int main() {
    int num;
    printf("Please enter number: ");
    scanf("%d", &num);
    printf("Sum Of Advisors = %d\n", SumOfAdvisors(num));
    return 0;
}