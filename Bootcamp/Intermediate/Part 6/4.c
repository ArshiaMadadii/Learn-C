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
    printf("Please enter name : \n");
    scanf("%s",&user.nickname);
    //strcpy(user.nickname,"Arshia");
    printf("Name = %s\n",user.nickname);
    //strcpy(user.lastname,"Madadi"); 
    printf("Please enter lastname : \n");
    scanf("%s",&user.lastname);
    printf("Lastname = %s\n",user.lastname);
    //user.age = 10;
    printf("Please enter age : \n");
    scanf("%d",&user.age);
    printf("age = %d\n",user.age);
}

int main()
{
    name user1;
    name user2;
    display(user1);
    display(user2);
}