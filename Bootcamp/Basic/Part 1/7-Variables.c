#include <stdio.h>

int main()
{
    int age ;
    printf("Please enter your age :");
    scanf("%d",&age);
    printf("Your age is %d , and Address is %p",age,&age);
}