#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[100];
    int age;
        
    file=fopen("test.txt","w");//if there is no file w first creates a file and if exists then it writes in this
    if(file==NULL)
    {
        printf("File doesnot exists");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your full name: ");
        gets(name);
        printf("Enter your age:");
        scanf("%d",&age);
        //fprintf(file_pointer,format_specifier,variable)
        fprintf(file,"Name=%s, Age=%d\n",name,age);       
        printf("file is written successfully");
        fclose(file);
    }
    return 0;
}