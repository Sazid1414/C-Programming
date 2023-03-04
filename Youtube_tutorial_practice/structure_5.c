#include<stdio.h>
struct person
{
    int age;
    float salary;

};
int main()
{   //direct assignment
    struct person person1={27,224400.45};
    struct person person2={25,234050};
    //element wise assignment
    struct person person3,person4;
    person3.salary=22330;
    person3.age=22;
    //structure variable assignment
    person4=person2;
    if(person1.age==person2.age&&person1.salary==person2.salary)
    {
        printf("EQUAL\n");

    }
    else
    {
        printf("Not Equal\n");
    }
    if(person4.age==person2.age&&person4.salary==person2.salary)
    {
        printf("EQUAL\n");

    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;





}