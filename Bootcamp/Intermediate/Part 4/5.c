#include <stdio.h>

int count_of_digi(int input_number)
{
    int count = 1;
    if (input_number < 10) return count ;
    else return count++ + count_of_digi(input_number/10) ;
    
}

int main()
{
    int number , result;
    printf("Please enter number : ");
    scanf("%d",&number);
    result = count_of_digi(number);
    printf("%d",result);

}