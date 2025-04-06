#ifndef _LOGIN_H_
#define _LOGIN_H_

#include <stdio.h>
#include <windows.h>

typedef struct 
{
    char name[50];
    char email[50];
    char password[50];
    char phone_number[50];
    char username[50];

}user;


int display_menu(void);

#endif