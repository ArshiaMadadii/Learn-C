#include <stdio.h>

int main ()
{

    int INnum;

    printf("Please enter number : ");scanf("%d",&INnum);

    if (INnum % 2 == 0) printf("Even");
    else if (INnum == 0) printf("Even");
    else printf("Odd");   
}