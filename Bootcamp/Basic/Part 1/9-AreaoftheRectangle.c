#include <stdio.h>

int main()
{
    double weight;
    double height;
    
    printf("\n\nPlease enter weight: ");
    scanf("%lf", &weight);  
    
    printf("Please enter height: ");
    scanf("%lf", &height); 
    
    printf("Your area is = %f\n", height * weight);
    
    return 0;
}