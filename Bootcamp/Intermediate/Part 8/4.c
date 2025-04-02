#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_pointer = NULL;
    file_pointer = fopen("LE3.txt","r");
    if(file_pointer != NULL) printf("File Open!\n\n");
    char data;
    do
    {
        data = fgetc(file_pointer);
        printf("%c",data);
    } while (data != EOF);// EOF = End Of File

    fclose(file_pointer);
}