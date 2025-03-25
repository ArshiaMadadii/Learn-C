#include <stdio.h>

int grades[5] = {0};

void getNumber(void)
{
    int i;
    //int number;
    for ( i = 0; i < 5 ; i++)
    {
        printf("Please enter number%d : ",i + 1);scanf("%d",&grades[i]);
    }
    printf("\n");
    for ( i = 0; i < 5 ; i++)
    {
        printf("Number%d : %d\n",i + 1 ,grades[i]);
    }
    
}
int FindMax(void)
{
    int max = grades[0];
    int i;
    for ( i = 0; i <5; i++)
    {
        if (max < grades[i])
        {
            max = grades[i];
        }
    }
    
    return max;
    
}
int main()
{
    getNumber();
    printf("\nmax number = %d",FindMax());
}