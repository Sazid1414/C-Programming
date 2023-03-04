#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[100];
    int age;
    char ch;
        
    file=fopen("test.txt","r");//r reads from the file
    if(file==NULL)
    {
        printf("File does not exists");
    }
    else
    {
        printf("File is opened\n");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);

        }
        printf("file is read successfully");
        fclose(file);
    }
    return 0;
}