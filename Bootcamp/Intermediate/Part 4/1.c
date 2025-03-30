#include <stdio.h>

int sum_up_to(int input_number)
{
    if (input_number == 1)
    {
        return 1;
    }
    else
    {
        return input_number + sum_up_to(input_number - 1 );
    }
    
    
}

int main(){

    int number , result;
    printf("Please enter number : ");
    scanf("%d",&number);
    result = sum_up_to(number);
    printf("%d",result);
}