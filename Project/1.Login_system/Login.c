#include "Login.h"

/******************************************
               DEBUG
******************************************/
#define DEBUG_DISPLAY
#undef DEBUG_DISPLAY

#define DEBUG_SINGUP
//#undef DEBUG_SINGUP

struct user user;
/******************************************
               Display menu
******************************************/
int display_menu(void) {
    int option;
    
    system("color 0b");//blue tetminal

    system("cls");
    printf("\n\n\t\t\t+----------------+\n");
    printf("\t\t\t|  System Login  |\n");
    printf("\t\t\t+----------------+\n");
    
    printf("\n\n\t\t\tPlease choose your operation : \n\n");
    printf("\t\t\t 1-Signup\n");
    printf("\t\t\t 2-Login\n");
    printf("\t\t\t 3-Exit\n");
    printf("\n\n\t\t\t Your choose : ");
    scanf("%d", &option);
    if(option > 3 )
    {
         printf("Please select the appropriate option (options 1 to 3)\n");
        return 0;
    }
    else return option;
    #ifdef DEBUG_DISPLAY
        printf("your option : %d", option);
    #endif

}

/******************************************
               input
******************************************/
void take_input(char ch[50])
{
fgets(ch,50,stdin);
}

/******************************************
               check option
               menu
******************************************/

void check_option(int input_number)
{
    switch (input_number)
    {
    case 1 :
    {
        system("cls");
        
    printf("\n\n\t\t\t+----------------+\n");
    printf("\t\t\t|    Sing  up    |\n");
    printf("\t\t\t+----------------+\n");
    printf("\n\t\t\tEnter your name : ");
    take_input(user.name);
    printf("\n\t\t\tEnter your E-Mail : ");
    take_input(user.email);
    printf("\n\t\t\tEnter your phone : ");
    take_input(user.phone_number);
    printf("\n\t\t\tEnter your username : ");
    take_input(user.username);
    printf("\n\t\t\tEnter your password : ");
    take_input(user.password);
    #ifdef DEBUG_SINGUP
        printf("%s , %s , %s , %s ,%s",user.name,user.email,user.phone_number
        ,user.username ,user.password);
    #endif
    }
        break;
    case 2 :
    {
        
        system("cls");
    }
        break;
    case 3 :
    {
        
        system("cls");
    }
        break;
    }
}