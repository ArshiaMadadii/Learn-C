
/***************************************
Login System 
Arshia madadi
**************************************/

#include <stdio.h>
#include "Login.h"
#include <windows.h>

#define DEBUG_DISPLAY
#undef  DEBUG_DISPLAY

int main()
{
    int option ;
    system("cls");//clear terminal
    printf("\n\n\t\t\t+----------------+\n");
    printf("\t\t\t|  System Login  |\n");
    printf("\t\t\t+----------------+\n");
    
    printf("\n\n\t\t\tPlease choose your operation : \n\n");
    printf("\t\t\t 1-Signup\n");
    printf("\t\t\t 2-Login\n");
    printf("\t\t\t 3-Exit\n");
    printf("\n\n\t\t\t Your choose : ");scanf("%d",&option);
        #ifdef DEBUG_DISPLAY
                printf("your option : %d",option);
        #endif
    
    return 0;
}