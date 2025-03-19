#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    printf("plese enter n : ");scanf("%d",&num);
    int i ;
    for ( i = 0; i <= num; i++)
    {
        printf("%d + ",i);
        sum = sum + i ;
    }
    printf(" = %d",sum);

}