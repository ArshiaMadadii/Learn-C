#include <stdio.h>

typedef struct 
{
    int x ;
    int y ;
    double z;

}my_struct;


typedef union 
{
    
    int x ;
    int y ;
    double z;

}my_union;


int main()
{
    my_struct s1 ;
    my_union u1 ;
    s1.x = 10 ;
    s1.y = 15 ;
    s1.z = 10.2;
    printf("\n------------------------------\n");
    printf("\nmy_struct : \n");
    printf("x = %d\n",s1.x);
    printf("y = %d\n",s1.y);
    printf("z = %.2f\n",s1.z);
    printf("x = %d , y = %d , z= %.2f\n",s1.x,s1.y,s1.z);
    printf("SIZE int X = %lld\n",sizeof(s1.x));
    printf("SIZE int Y = %lld\n",sizeof(s1.y));
    printf("SIZE int Z = %lld\n",sizeof(s1.z));
    printf("SIZE my_struct = %lld\n",sizeof(s1));
    printf("\n------------------------------\n");
    printf("my_union : \n");
    u1.x = 10 ;
    printf("x = %d\n",u1.x);
    u1.y = 15 ;
    printf("y = %d\n",u1.y);
    u1.z = 10.2;
    printf("z = %.2f\n",u1.z);
    printf("SIZE int X = %lld\n",sizeof(u1.x));
    printf("SIZE int Y = %lld\n",sizeof(u1.y));
    printf("SIZE int Z = %lld\n",sizeof(u1.z));
    printf("x = %d , y = %d , z= %.2f\n",u1.x,u1.y,u1.z);
    printf("SIZE my_union = %lld\n",sizeof(u1));
    
}