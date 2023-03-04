#include<stdio.h>
#include<string.h>
struct person
{
    char name[100];
    int age ;
    float salary;
};
int display(struct person p)
{
    printf("Name:%s\n",p.name);
    printf("Age:%d\n",p.age);
    printf("Salary:%.2f",p.salary);

}
int main()
{
    struct person person1;
    strcpy(person1.name,"Sazidur Rahman");//we can't initialize string structure directly
    person1.age=20;
    person1.salary=12000;
    display(person1);
    return 0;
    
}