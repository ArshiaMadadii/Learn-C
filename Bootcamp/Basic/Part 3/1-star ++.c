#include <stdio.h>

int main()
{
    int num;

    printf("Please enter num : ");scanf("%d",&num);

    int i = 1;
    while (i++ <= num)
    {
        printf("*");
    }
    
}