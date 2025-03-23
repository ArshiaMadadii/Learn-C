#include <stdio.h>

int even(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int num;

    printf("Please enter number : ");
    scanf("%d",&num);

    printf("%d",even(num));
}