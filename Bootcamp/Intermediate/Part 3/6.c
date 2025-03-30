#include <stdio.h>
#include <stdlib.h>

char* strcpy(char *location, char *input);

int main()
{   
    char str[] = "arshia";
    char cpystr[50];
    strcpy(cpystr, str); 
    printf("cpy = %s", cpystr);
    return 0;
}

char* strcpy(char *location, char *input)
{
    int i = 0; 
    while (input[i] != '\0')
    {
        location[i] = input[i];
        i++;
    }
    location[i] = '\0'; 
    return location;
}