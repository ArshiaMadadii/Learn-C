#include <stdio.h>

int factorial(int inputnumber)
{
    int i ;
    for ( i = inputnumber - 1 ; i >= 1; i--)
    {
        inputnumber = inputnumber * i;
    }
    return inputnumber;
    
}

int main()
{
    int number ;
    printf("Please enter number : ");scanf("%d",&number);

    printf("fac = %d",factorial(number));
}