#include <stdio.h>

int main()
{
    int num , i;
    printf("please enter num : ");scanf("%d",&num);

    for ( i = 1; i <= num ; i++)
    {
        printf("%d",i);
        
    }
    printf("\n");
    int j ;
    for (j  = num ; j >= 1; j--)
    {
        printf("%d",j);
    }
    
}