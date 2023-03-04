#include<stdio.h>
struct person
{   //global structure 
    int age ;
    float salary;
};

int main()
{
    struct person person1,person2;
    printf("Enter info of person1:\n");
    printf("Enter Age:");
    scanf("%d",&person1.age);
    printf("Enter salary:");
    scanf("%f",&person1.salary);
    printf("person1:\n");
    printf("Age is:%d\n",person1.age);
    printf("Salary is:%.2f\n",person1.salary);


    printf("Enter info of person2:\n");
    printf("Enter Age:");
    scanf("%d",&person2.age);

    printf("\nEnter salary:");
    scanf("%f",&person2.salary);

    
    printf("person2:\n");
    printf("Age is:%d\n",person2.age);
    printf("Salary is:%.2f\n",person2.salary);
    return 0;

}