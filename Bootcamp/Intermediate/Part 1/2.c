#include <stdio.h>

char name[] = {'A','r','s','h','i','a'};

void showName(void)
{
    int i;
    for ( i = 0; i < 6; i++)
    {
        printf("name[%d] = %c\n",i + 1,name[i]);
    }
   
    for ( i = 0; i < 6; i++)
    {
        printf("%c",name[i]);
    }
    printf("\n");
    
    for ( i = 5; i >= 0; i--)
    {
        printf("%c",name[i]);
    }
}

int main()
{
    showName();
}