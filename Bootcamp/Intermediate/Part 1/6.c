#include <stdio.h>

int value[5] = {0};

void getvalue(void)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Please enter value%d : ", i + 1);
        scanf("%d", &value[i]);
    }
}

int maxValue(void)
{
    int i;
    int MaxValue = value[0];
        for ( i = 0; i < 5 ; i++)
        {
            if (MaxValue < value[i]) MaxValue =  value[i] ;

        }
        return MaxValue;

}
int minValue(void)
{

    int i;
    int MinValue = value[0];
        for ( i = 0; i < 5 ; i++)
        {
            if (MinValue > value[i]) MinValue =  value[i] ;

        }
        return MinValue;
}
int main()
{
    getvalue();
    printf("MAX data = %d\n",maxValue());
    printf("Min data = %d",minValue());
}