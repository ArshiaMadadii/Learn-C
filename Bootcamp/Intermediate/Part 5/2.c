#include<stdio.h>

struct point
{
    int x;
    int y;
};


int main()
{

    struct point num = {0};
    
    printf("Please enrter Y = ");scanf("%d",&num.y);
    printf("Please enrter X = ");scanf("%d",&num.x);
    
    printf("X = %d , Y = %d",num.x,num.y);
    

}