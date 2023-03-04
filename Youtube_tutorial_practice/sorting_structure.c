#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    int roll_number;
    char name[100];
    float CGPA;
};

int main()
{
    struct student size[52],temp;
    int n;
    printf("Enter student number : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the student %d roll,name ,cgpa : ",i+1);
        scanf("%d %f %s",&size[i].roll_number,&size[i].CGPA,size[i].name);

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(size[j].CGPA>size[j+1].CGPA)
            {
                temp=size[j];
                size[j]=size[j+1];
                size[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\t\t\t%s\t\t\t\t%f\n",size[i].roll_number,size[i].name,size[i].CGPA);
    }
    return 0;


}