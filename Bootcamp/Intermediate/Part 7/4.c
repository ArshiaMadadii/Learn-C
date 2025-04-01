#include <stdio.h>

int main()
{
    int age = 22 ;
    int *const age_ptr = &age;
    printf("age = %d",age);
    age = 45;
    printf("age = %d",age);
    *age_ptr = 22;
    printf("age = %d",age);
    age_ptr = 99 ;//error
}