#include <stdio.h>
#include "stdlib.h"
int main(void) {
    char num1 = 10 , num2 = 2;
    printf("Ressult1=%d  Ressul02=%d\n",num1,num2);
    printf("Ressult=%d\n",num1+num2);
    printf("Ressult=%d\n",num1-num2);
    printf("Ressult=%d\n",num1*num2);
    printf("Ressult=%d\n",num1%num2);
    printf("Ressult=%d\n",num1/num2);
    printf("Ressult1=%d  Ressul02=%d\n",num1++,num2++);
    printf("Ressult1=%d  Ressul02=%d\n",num1--,num2--);

    return 0;
}
