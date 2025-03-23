#include <stdio.h>

int square(int number)
{
    return number * number ;
}
int main()
{
    int num;
    printf("please enter n : ");
    scanf("%d",&num);
    printf("%d",square(num));
}