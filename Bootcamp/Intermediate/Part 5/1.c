#include<stdio.h>

struct point
{
    int x;
    int y;
};


int main()
{

    struct point num = { .y = 10 , .x = 5};
    printf("X = %d , Y = %d\n",num.x,num.y);
    
    struct point num2 = { 5 , 10};
    printf("X = %d , Y = %d",num2.x,num2.y);
    

}