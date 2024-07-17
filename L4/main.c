#include <stdio.h>
#include "stdlib.h"

int main(void) {
    int a = 10 , b = 15;
    float c = 12.34567;
    putchar('a');
    putchar('a');
    putchar('\n');
    putchar('a');
    putchar('\n');
    puts("For 2 word");
    printf("test=%d \n ",a);
    printf("test=%d , test=%d \n",a,b);
    a = 12 ;
    printf("test=%d \n",a);
    printf("FLOAT = %4.2f \n",c);
    printf("FLOAT = %3.3f \n",c);
    printf("FLOAT = %6.4f \n",c);
    printf("FLOAT = %6.0f \n",c);

    return 0;

}
