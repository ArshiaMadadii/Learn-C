#ifndef _LOGIN_H_
#define _LOGIN_H_

#define ENTER      13 //ascii table
#define TAB         9 //ascii table
#define BACK_SPACE  8 //ascii table

#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>


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

void password(char password[50]);

#endif