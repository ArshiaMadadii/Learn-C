#include <stdio.h>

int main(void) {
    int number;
    puts("Enter number: ");
    scanf("%d",&number);
    if((-100<number && number<8) || (10<=number && number<15) || (number=15)) printf("%.d in the range",number);
    else printf("%.2d Nooo!");


    return 0;
}
