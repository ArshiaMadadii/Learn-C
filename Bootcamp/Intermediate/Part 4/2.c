#include <stdio.h>

int factorial(int input_number)
{
    if (input_number == 1)
    {
        return 1;
    }
    else
    {
        return input_number * factorial(input_number - 1 );
    }
    
    
}

int main(){

    int number , result;
    printf("Please enter number : ");
    scanf("%d",&number);
    result = factorial(number);
    printf("%d",result);
}