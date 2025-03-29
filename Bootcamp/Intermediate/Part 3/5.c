#include <stdio.h>
#include <string.h>

int strLEN(char *input);

int main()
{   
    char str[50];
    printf("Please enter string : ");
    gets(str);

    printf("Len = %d",strLEN(str));
}

int strLEN(char *input)
{
    int count = 0;
    while (input[count]!='\0')
    {
        count++;
    }
    return count;   
}