#include <stdio.h>

int main ()
{
    float Salaray,Month,Day;
    printf("Please enter your Salary : ");scanf("%f",&Salaray);

    Month = Salaray/12;
    Day = Month/30;

    printf("Salary Calculato : \nMonth = %2.2f\nDay = %2.2f",Month,Day);
}