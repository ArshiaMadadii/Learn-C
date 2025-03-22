#include <stdio.h>

int main()
{
    int number1,number2;

    printf("please enter n1 : ");
    scanf("%d",&number1);
    printf("please enter n2 : ");
    scanf("%d",&number2);

    if (number1 >= number2)
    {
        int i ;
        for ( i = number2; i > 1; i--)
        {
            if ((number2 % i == 0) && (number1 % i == 0))
            {
                printf("GCD = %d",i);
                break;
            }
            
        }
        
    }
  
    else
    {
        int j ;
        for ( j = number1; j > 1; j--)
        {
            if ((number1 % j == 0) && (number1 % j == 0))
            {
                printf("GCD = %d",j);
                break;
            }
    }
    
    

}
}