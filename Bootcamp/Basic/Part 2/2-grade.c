#include <stdio.h>


int main ()
{
    int grade;
    printf("Please enter grade :");scanf("%d",&grade);
    if (grade >12) printf("Pass ");
    else if (grade >= 10 && grade <= 12) printf("mashrot");
    else printf("false");
    
    

}