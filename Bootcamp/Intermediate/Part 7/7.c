#include <stdio.h>

#define MIN(a,b) (( (a) < (b) ) ? a : b )

int main()
{
    printf("min = %d\n",MIN(12,13));
    printf("min = %d",MIN(22,15));
}