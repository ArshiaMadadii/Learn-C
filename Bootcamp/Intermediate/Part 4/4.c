#include <stdio.h>

int sum_of_digi(int input_number)
{

    if (input_number < 10) return input_number ;
    else return input_number % 10 + sum_of_digi(input_number/10) ;
    
}

int main()
{
    int number , result;
    printf("Please enter number : ");
    scanf("%d",&number);
    result = sum_of_digi(number);
    printf("%d",result);

}