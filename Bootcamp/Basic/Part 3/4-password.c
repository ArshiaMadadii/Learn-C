#include <stdio.h>
#include <string.h>
int main()
{
    char correctPassword[] = "pass123"; 
    char inputPassword[50];       
    char name[50];                


    printf("Please enter your name: ");
    scanf("%s", name);


    do
    {
        printf("Please enter the password: ");
        scanf("%s", inputPassword);

        if (strcmp(inputPassword, correctPassword) != 0)
        {
            printf("Incorrect password. Please try again.\n");
        }
    } while (strcmp(inputPassword, correctPassword) != 0); 
  
    printf("Welcome, %s!\n", name);

    return 0;
}