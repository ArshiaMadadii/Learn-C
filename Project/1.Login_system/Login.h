#ifndef _LOGIN_H_
#define _LOGIN_H_

#include <stdio.h>
#include <windows.h>

struct user 
{
    char name[50];
    char email[50];
    char password[50];
    char phone_number[50];
    char username[50];

};


int display_menu(void);

void take_input(char ch[50]);


void check_option(int input_number);

#endif