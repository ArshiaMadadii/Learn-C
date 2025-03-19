#include <stdio.h>

int main()
{
    int num,pow;

    printf("Please enter num : ");scanf("%d",&num);
    printf("Please enter pow : ");scanf("%d",&pow);
    int i = 1;
    int result = 1;
    while (i++ <= pow)
    {
        result *= num;//result = result * num ;
    }
    printf("num^pow : %d ",num);
}