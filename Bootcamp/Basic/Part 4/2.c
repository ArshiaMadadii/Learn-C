#include <stdio.h>

void calNumber(int a,int b)
{
    if (a > b)
    {
        printf("%d > %d",a,b);
    }
    else if (a < b)
    {
        printf("%d < %d",a,b);
    }
    else
    {
        printf("%d = %d",a,b);
    }
    
    
    
}

int main(){
    int num1,num2;

    printf("enter num1 : ");
    scanf("%d",&num1);

    printf("enter num2 : ");
    scanf("%d",&num2);

    calNumber(num1,num2);
}