#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    int age;
    long phone_number;
    int student_number;
    file=fopen("student.txt","a");
    if(file==NULL)
    {
        printf("The file does not exists");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter the number of students:\n");
        scanf("%d",&student_number);
        for(int i=0;i<student_number;i++)
        {
            printf("Student Name: ");
            //gets(name);
            scanf("%s",name);
            printf("Enter Age: ");
            scanf("%d",&age);
            printf("Enter Mobile Number: ");
            scanf("%ld",phone_number);
            fprintf(file,"\n\n%s\t\t\t%d\t\t%ld",name,age,phone_number);
        }
        fclose(file);

    }
    return 0;

}