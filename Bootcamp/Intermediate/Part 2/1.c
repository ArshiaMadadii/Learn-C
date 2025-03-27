#include <stdio.h>


void swap_number(int *number1,int *number2)
{
   int temp;
   temp = *number1;
   *number1 = *number2;
   *number2 = temp; 
}
int main()
{
    int number_1 = 10;
    int number_2 = 20;
    printf("before swap : \n");
    printf("number 1 = %d , number 2 = %d\n",number_1,number_2);

    swap_number(&number_1,&number_2);
    
    printf("After swap : \n");
    printf("number 1 = %d , number 2 = %d\n",number_1,number_2);

    return 0;
}