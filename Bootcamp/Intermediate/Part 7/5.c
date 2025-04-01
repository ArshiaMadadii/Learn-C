#include <stdio.h>

#define SIZE 25
#undef SIZE
#define SIZE 61

int main()
{
    printf("SIZE = %d",SIZE);
}