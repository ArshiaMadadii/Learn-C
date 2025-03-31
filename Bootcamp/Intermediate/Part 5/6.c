#include <stdio.h>

typedef int Grade;  
 
typedef struct student
{
  char name[50];
  Grade Mathematics ;
  Grade Physics ; 
  Grade Chemistry ;
  Grade Biology ;
  Grade Literature ;
  float overall_score ;

}Student;

float average(Grade L1,Grade L2,Grade L3,Grade L4,Grade L5);

int main()
{
    Student s1 ;
    printf("Please enter student name : ");scanf("%s",&s1.name);
    printf("Please enter Biology score : ");scanf("%d",&s1.Biology);
    printf("Please enter Chemistry score : ");scanf("%d",&s1.Chemistry);
    printf("Please enter Literature score : ");scanf("%d",&s1.Literature);
    printf("Please enter Mathematics score : ");scanf("%d",&s1.Mathematics);
    printf("Please enter Physics score : ");scanf("%d",&s1.Physics);

    s1.overall_score = average(s1.Biology,s1.Chemistry,s1.Literature,s1.Mathematics,s1.Physics);

    printf("overall score = %.2f",s1.overall_score);
}


float average(Grade L1,Grade L2,Grade L3,Grade L4,Grade L5)
{
    float average;
    average = (L1 + L2 + L3 + L4 + L5)/5.0;
    return average;
}