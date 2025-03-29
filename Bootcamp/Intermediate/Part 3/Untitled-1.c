#include <stdio.h>
#include <string.h>

char str[]  = "Hello";
char str1[] = {'H','e','l','l','o','\0'};

int main()
{
    printf("Size %s = %d ",str,strlen(str));
    printf("Size %s = %d ",str1,strlen(str1));
}