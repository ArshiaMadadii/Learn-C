#include <stdio.h>

int main ()
{
    int INnum , num1;

    printf("Please enter Number : ");scanf("%d",&INnum);

    num1 =  INnum/100;
    if (num1 >= 1) printf("Triple");
    else
    {
        num1 = INnum /10 ;
        if (num1 >=1) printf("Double");
        else printf("Single");
        
    }
    
    

}