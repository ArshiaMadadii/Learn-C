#include <stdio.h>

int MAXdig(int num)
{
    int Units , Tens;
    if (num>=10 && num < 100 )
    {
        Tens = num / 10;
        Units = num % 10;
        if (Tens >= Units)
        {
            return Tens;
        }
        else return Units;
    }
    
}

int main ()
{
    int number ;
    printf("Please enter number : ");scanf("%d",&number);

    printf("Max number = %d",MAXdig(number));
}