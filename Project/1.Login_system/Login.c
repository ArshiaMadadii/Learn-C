#include "Login.h"

/******************************************
               DEBUG
******************************************/
#define DEBUG_DISPLAY
#undef DEBUG_DISPLAY

#define DEBUG_SINGUP
//#undef DEBUG_SINGUP

struct user user;
char confirm_password[50];
FILE *file_pointer;

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
    fgetc(stdin);    // Fix: When user presses Enter after scanf, 
                    // the \n remains in buffer and breaks fgets().
                   // This consumes the dangling newline.
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
        Password
******************************************/


void password(char password[50])
{
    int i = 0;
    char input_password;
    /*take password*/
    while (1)
    {
        input_password = getch();
        if ( input_password  == ENTER ||  input_password == TAB)
        {
            password[i] = '\0';
            break;
        }

        else if (( input_password == BACK_SPACE ) && ( i > 0 ))
        {
                i--;
                printf("\b \b");      
        }
                
        else
        {
            password[i++] = input_password;
            printf("*");
        }
        
    }
}


void verify_password_then_register(char password[50] ,char confirm_password[50])
{
    if(!(strcmp(password,confirm_password)))//check password
    {
        file_pointer = fopen("Users.txt","a+");
        fwrite(&user,sizeof(struct user),1,file_pointer);
        if (fwrite != 0)
        {   
            system("color 0A");//Green
            printf("\n\n\t\t\tYou're now registered!\n");
            Sleep(4000);
            system("color 0b");//blue tetminal

            printf("\n\n\t\t\tUsername : %s",user.username);
            printf("\n\t\t\tPassword : %s",user.password);
            Sleep(2000);
            system("color 0F");//red
            printf("\n\n\t\t\tDon't forget! This is your account's golden key ");
            Sleep(4000);
            system("color 0b");//blue tetminal
        }
        else
        {
            printf("\n\t\t\tSory!\n");
        
        }
    }
    else
    {
        system("color 4F");//red
        printf("\n\t\t\tThe passwords entered did not match!\n");
        Beep(750 , 300);
    }
    fclose(file_pointer);
    
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
    printf("\n\t\t\tEnter your name     : ");
    take_input(user.name);
    printf("\n\t\t\tEnter your E-Mail   : ");
    take_input(user.email);
    printf("\n\t\t\tEnter your phone    : ");
    take_input(user.phone_number);
    printf("\n\t\t\tEnter your username : ");
    take_input(user.username);
    printf("\n\t\t\tEnter your password : ");
    password(user.password);
    printf("\n\t\t\tConfirm password    : ");
    password(confirm_password);
    verify_password_then_register(user.password,confirm_password);
 
    #ifdef DEBUG_SINGUP
        
        printf("\n\n---------------------------");
        printf("\n  %s ,%s ,%s ,%s ,%s ,%s",user.name,user.email,user.phone_number
        ,user.username ,user.password,confirm_password);
        printf("\n\n---------------------------");
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