#include <stdio.h>

int grades[5] = {3,12,15,10,13};

char showGrades (void)
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Grades[%d] = %d\n",i,grades[i]);
    }
    
}
int main()
{
    printf("Hello\n");
    showGrades();
    printf("Finish\n");
}