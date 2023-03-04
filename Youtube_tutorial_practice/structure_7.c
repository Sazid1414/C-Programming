#include<stdio.h>
struct person
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;
    for(i=0;i<4;i++)
    {
         printf("Enter Info for person :%d\n",i+1);
         printf("Enter Name: ");
         fflush(stdin);//use to avoid enter name and age in one line
         gets(person[i].name);


         printf("Enter Age: ");
         scanf("%d",&person[i].age);
         printf("Enter Salary: ");
         scanf("%f",&person[i].salary);

    }
     for(i=0;i<4;i++)
    {
         printf("Info of person :%d\n",i+1);
         printf("Name:%s\n",person[i].name);
         printf("Age:%d\n",person[i].age);
         printf("Salary:%.2f\n",person[i].salary);
        printf("\n");
    }
    return 0;
   
}