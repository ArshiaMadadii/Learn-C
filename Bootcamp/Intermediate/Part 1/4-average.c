#include <stdio.h>

int value[2] = {0} ;

void getvalue(void)
{
    int i ;
for ( i = 0; i < 2; i++)
{
    printf("Please enter value%d : ",i);scanf("%d",&value[i]);
}

}

float average(void)
{
    float average;
    average = (value[0] + value[1])/(float)2;
    return average;
}

int main()
{
    getvalue();
    printf("Average = %.2f",average());
}