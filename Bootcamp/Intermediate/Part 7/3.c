#include <stdio.h>

int main()
{
    int age = 22 ;//read only
    const int *age_ptr = &age;
    printf("age = %d",age);
    age = 45;
    printf("age = %d",age);
    *age_ptr = 22;//error
    printf("age = %d",age);
}