#include <stdio.h>
#include <string.h>

typedef union 
{
    char nickname[20];
    char lastname[20];
    int age ;
}name;

void display(name user)
{
    strcpy(user.nickname,"Arshia");
    printf("Name = %s\n",user.nickname);
    strcpy(user.lastname,"Madadi");
    printf("Lastname = %s\n",user.lastname);
    user.age = 10;
    printf("age = %d\n",user.age);
}

int main()
{
    name user1;
    display(user1);
}