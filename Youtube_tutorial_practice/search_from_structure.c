#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    int roll;
    char student_name[100];
    float CGPA;
};
int main()
{
    struct student bsse[100];
    int num_of_student ;
    printf("Enter number of student : ");
    scanf("%d",&num_of_student);
    
    for(int i=0;i<num_of_student;i++)
    {
        printf("Enter Info of student %d : ",i+1);
        scanf("%d %f %s",&bsse[i].roll,&bsse[i].CGPA,bsse[i].student_name);
    }
    printf("Enter the Student Roll Number : ");
    int k,check=0;
    scanf("%d",&k);

    for(int i=0;i<num_of_student;i++)
    {
        if(k==bsse[i].roll)
        {
            printf("Student Found at index : %d\n",i);
            printf("The student name is:%s\n",bsse[i].student_name);
            printf("The student roll is:%d\n",bsse[i].roll);
            printf("The student CGPA is:%f\n",bsse[i].CGPA);

            check=1;
            break;

        }
        
    }

    
   if(check==0) 
    {
        printf("Student not found !");
    }
    return 0;
    


}