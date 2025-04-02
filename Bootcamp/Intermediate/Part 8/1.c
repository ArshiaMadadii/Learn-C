#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file_ptr = NULL;
    file_ptr = fopen("LE1.txt","w");
    if (file_ptr != NULL) printf("ok!\n");

    fprintf(file_ptr,"date = %s\t",__DATE__);
    fprintf(file_ptr,"time = %s\t",__TIME__);
}