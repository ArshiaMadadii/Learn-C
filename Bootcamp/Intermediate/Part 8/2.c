#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *file_pointer = NULL;
    file_pointer = fopen("dataLog.txt","w");
    if (file_pointer != NULL ) printf("The file was created correctly.");
    
    fprintf(file_pointer,"date = %s\t",__DATE__);
    fprintf(file_pointer,"Time = %s\n\n",__TIME__);
    
    int voltage = 0;
    
    for(voltage = 0 ; voltage <=12 ; voltage++)
    {
        fprintf(file_pointer,"Voltage = %dv\n",voltage);
    }
    fprintf(file_pointer,"Finish Time = %s\n\n",__TIME__);
    
}