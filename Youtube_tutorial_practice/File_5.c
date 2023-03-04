#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file; 
    char name[100];
        
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
        fputs(name ,file);//fputs(array_name,file_pointer)
        printf("file is written successfully");
        fclose(file);
    }
    return 0;
}