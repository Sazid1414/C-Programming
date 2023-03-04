#include<stdio.h>
/*struct person
{   //global structure 
    //any one can use that
    int age ;
    float salary;
};*/
   // struct person person1,person2;//global variable


int main()
{
    struct person
{   //local structure 
    //only main can access this
    int age ;
    float salary;
};
struct person person1,person2;//local variable
    person1.age=27;
    person1.salary=12000.0;
    printf("Person1:\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);
    person2.age=28;
    person2.salary=11403;
    printf("Person2:\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);
    return 0;


}