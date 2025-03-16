#include <stdio.h>

int main()
{
    int a1 , d , n, an ;
    printf("\n\nPlease enter a1 : ");scanf("%d",&a1);
    printf("Please enter d : ");scanf("%d",&d);
    printf("Please enter n : ");scanf("%d",&n);

    an = a1 + (n-1)*d;
    printf("an = %d",an);
}