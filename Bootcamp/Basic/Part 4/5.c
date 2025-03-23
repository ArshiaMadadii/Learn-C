#include <stdio.h>


float area(float width, float height)
{
    float area;
    area = width * height;
    return area;
}
int main()
{
    float inWIDTH,inHEIGHT;
    printf("plese enter width : ");scanf("%f",&inWIDTH);
    printf("plese enter height : ");scanf("%f",&inHEIGHT);

    printf("Area = %.2f",area(inWIDTH,inHEIGHT));
}