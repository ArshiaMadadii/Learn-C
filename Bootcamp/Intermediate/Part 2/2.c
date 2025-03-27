#include <stdio.h>

void find_max_min(int number1,int number2,int *max ,int *min)
{
    if (number1 > number2)
    {
        *max = number1;
        *min = number2;
    }
    else
    {
        *max = number2;
        *min = number1;
        
    }
    
}

int main()
{
    int num1,num2,max = 0 ,min = 0 ;
    printf("Plese enter n1 : ");scanf("%d",&num1);
    printf("Plese enter n2 : ");scanf("%d",&num2);
    find_max_min(num1,num2,&max,&min);
    printf("max = %d , min = %d ",max,min);
}