#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    char last_name[20];

    strcpy(name,"Arshia");
    strcpy(last_name,"Madadi");

    strcat(name,last_name);
    puts(name);
}