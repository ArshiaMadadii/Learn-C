#include <stdio.h>

int main ()
{
    int num;

    printf("Please enter number : ");scanf("%d",&num);

    if (num >= 0)
    {
    printf("absolute value = %d ",num);
    }
    else num = num * -1;
    printf("absolute value = %d ",num);
}