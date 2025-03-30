#include <stdio.h>

int fibonacci_sequence(int input_number)
{
    if (input_number == 0) return 0;
    if (input_number == 1) return 1;
    if (input_number > 1)
    {
        return fibonacci_sequence(input_number -1) + fibonacci_sequence(input_number -2); 
    }
    
    
}

int main()
{
    int number , result;
    printf("Please enter number : ");
    scanf("%d",&number);
    result = fibonacci_sequence(number);
    printf("%d",result);
}