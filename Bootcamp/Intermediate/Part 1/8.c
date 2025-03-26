#include <stdio.h>

int max[3][4] =
{
    {1,2, 3 ,4 }
   ,{5,6, 7 ,8 } 
   ,{9,10,11,12}
};

int main()
{
    int row,column;
    printf("Please enter row : ");scanf("%d",&row);
    printf("Please enter column : ");scanf("%d",&column);
    printf("%d",max[row][column]);
}