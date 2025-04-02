#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file_pointer = NULL;
    file_pointer = fopen("LE3.txt","a");
    fprintf(file_pointer,"date = %s\t",__DATE__);
    fprintf(file_pointer,"date = %s\n\n",__TIME__);
    fprintf(file_pointer,"-----------------\n\n");
    fclose(file_pointer);
}