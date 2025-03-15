#include <stdio.h>

int main()
{
    int grade_1;
    int grade_2;
    printf("\n\nPlease enter your grade1 :");scanf("%d",&grade_1);
    printf("Please enter your grade2 :");scanf("%d",&grade_2);
    
    printf("Avarge = %2.2lf ",(grade_1 + grade_2)/2.0); /*2.0 for canvert to double 
                                                        %lf for double */

}
