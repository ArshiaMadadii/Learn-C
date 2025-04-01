#include <stdio.h>

#define DEBUG
//#undef  DEBUG

int main()
 {
    int i ;
    int sum = 0;
    for ( i = 0; i < 10; i++)
    {   
        sum += i ;
        #ifdef DEBUG
            printf("i = %d , sum = %d\n",i,sum);
        #endif
    }
    printf("\n\n sum = %d",sum);
 }