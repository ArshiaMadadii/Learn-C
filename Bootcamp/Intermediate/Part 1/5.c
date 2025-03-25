#include <stdio.h>
#include <stdbool.h>

int value[5] = {0};

void getvalue(void)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Please enter value%d : ", i);
        scanf("%d", &value[i]);
    }
}

bool Ascending(void)
{
    int i;
    for (i = 0; i < 4; i++) 
    {
        if (value[i] > value[i+1])
            return false;
    }
    return true;
}

int main()
{
    getvalue();
    if (Ascending() == false)
        printf("Not ascending.");
    else
        printf("Ascending");
    
    return 0;
}