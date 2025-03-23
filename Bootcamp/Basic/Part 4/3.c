#include <stdio.h>

int calNumber()
{
    int num1,num2;

    printf("enter num1 : ");
    scanf("%d",&num1);

    printf("enter num2 : ");
    scanf("%d",&num2);

    if (num1 > num2)
    {
        return num1;
    }
    else if (num1 < num2)
    {
        return num2;
    }    
    
}

int main()
{
    printf("%d",calNumber());
}