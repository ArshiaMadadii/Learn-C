#include "Login.h"

/******************************************
               DEBUG
******************************************/
#define DEBUG_DISPLAY
#undef DEBUG_DISPLAY

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