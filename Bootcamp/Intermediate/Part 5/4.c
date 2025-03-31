#include <stdio.h>

struct people
{
    char name[40];
    int age ;
    float salary;
};

int main()
{
    struct people heu1;
    struct people heu2;
    printf("plese enter  name human 1 : ");
    scanf("%s",&heu1.name);
    printf("plese enter  age human 1 : ");
    scanf("%d",&heu1.age);
    printf("plese enter  salary human 1 : ");
    scanf("%f",&heu1.salary);
    

    
    printf("plese enter  name human 2 : ");
    scanf("%s",&heu2.name);
    printf("plese enter  age human 2 : ");
    scanf("%d",&heu2.age);
    printf("plese enter  salary human 2 : ");
    scanf("%f",&heu2.salary);
    

    printf("name = %s , age = %d  , salary = %.2f\n",
            heu1.name , heu1.age ,   heu1.salary);

    
    printf("name = %s , age = %d  , salary = %.2f",
             heu2.name , heu2.age ,   heu2.salary);

}

