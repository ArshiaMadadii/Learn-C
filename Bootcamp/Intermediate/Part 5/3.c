#include <stdio.h>

struct date
{
    int year,month,day;
};

int main()
{
    struct date today = {0};
    today.year = 2025;
    today.month = 03;
    today.day = 31;

    printf("%d/%d/%d",today.year,today.month,today.day);
}