#include <stdio.h>

int main()
{
    float num0,num1,num2,num3;
    int sum;
    printf("\n\nPlease enter number : ");scanf("%f",&num0);
    num1 = (int)num0 % 100; //23 
    //printf("%f\n", num1);
    num2 = (int)num1 % 10; //3
    //printf("%f\n", num2);
    num3 =( num1 - num2 )/10;//2
    //printf("%f\n", num3);
    num1 =( num0 - num1 )/100; //1
    //printf("%f\n", num1);
    sum = num1 + num3 + num2 ;
    printf("Sum = %d", sum);
    
}