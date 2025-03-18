#include <stdio.h>

int main ()
{
    int x, y;
    printf("Please enter X : ");scanf("%d",&x);
    printf("Please enter Y : ");scanf("%d",&y);

    if (x > 0 )
    {
        if (y > 0) printf("Quadrant 1");
        else if (y < 0) printf("Quadrant 4");
        
    }
    
    if (x < 0 )
    {
        if (y > 0) printf("Quadrant 2");
        else if (y < 0) printf("Quadrant 3");
        
    }
    else printf("center");

}