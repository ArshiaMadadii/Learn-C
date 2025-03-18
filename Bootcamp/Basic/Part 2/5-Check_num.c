#include <stdio.h>

int main ()
{
    int num1, num2;
    printf("Please enter Number 1 : ");scanf("%d",&num1);
    printf("Please enter Number 2 : ");scanf("%d",&num2);

    if (num1 == num2)
    {
         printf("Same");
    }
    else if (num1 > num2)
    {
         printf("Number%d %d > Number%d %d",1,num1,2,num2);
    }
    else printf("Number%d %d < Number%d %d",1,num1,2,num2);
    

}