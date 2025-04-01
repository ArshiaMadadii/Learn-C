#include <stdio.h>
#include <string.h>

typedef union 
{
    char nickname[20];
    char lastname[20];
}name;

int main()
{
    name ueser1;
    name *ptr;
    ptr = &ueser1;
    strcpy(ptr->nickname , "Arshia");
    printf("%s",ptr);

}
