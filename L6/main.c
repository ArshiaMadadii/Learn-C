#include <stdio.h>

int main(void) {

    float area,radius;
    puts("Enter radius");
    scanf("%f", & radius);
    area = 3.14 * radius * radius;
    printf("Area = %.2f\n",area) ;
    if(area>=500) printf("It's Gooood");
    else printf("smal");

    return 0;
}
