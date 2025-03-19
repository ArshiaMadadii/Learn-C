#include <stdio.h>

int main()
{
    int num , i;
    printf("please enter num : ");scanf("%d",&num);

    for ( i = 1; i <= num ; i++)
    {
        int J ;
        for ( J = 1; J<=i; J++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
}