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

    
    printf("Person1:\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);

    printf("Person2:\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);

    printf("Person3:\n");
    printf("Age =%d\n",person3.age);
    printf("Salary =%.2f\n",person3.salary);
    
    printf("Person4:\n");
    printf("Age =%d\n",person4.age);
    printf("Salary =%.2f\n",person4.salary);
    return 0;
}
