#include <stdio.h>

int main()
{
    float Celsius , Fahrenheit ;

    printf("\n\nPlease enter Degree Celsius : ");scanf("%f",&Celsius);
    Fahrenheit = (Celsius * 1.8) + 32 ;
    printf("Degree Fahrenheit = %.2f °F",Fahrenheit);

}