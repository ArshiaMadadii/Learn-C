#include <stdio.h>

int main()
{
    float num,numDec;
    printf("Please enter number : ");scanf("%f",&num);
    numDec = (int)num % 100;
    printf("%f",numDec);
}