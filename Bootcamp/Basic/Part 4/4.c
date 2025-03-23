#include <stdio.h>

float average(float num1,float num2,float num3)
{
    float average;
    average = (num1 + num2 + num3)/(float)3;

    return average;
}
int main()
{
    int nember_1,nember_2,nember_3;

    printf("enter number : ");
    scanf("%d%d%d", &nember_1, &nember_2, &nember_3);
    printf("average = %.2f",average(nember_1,nember_2,nember_3));
}