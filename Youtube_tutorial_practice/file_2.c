#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20]="Sazidur Rahman";
    int length=strlen(name);
    
    file=fopen("test.txt","w");//if there is no file w first creates a file and if exists then it writes in this
    if(file==NULL)
    {
        printf("File doesnot exists");
    }
    else
    {
        printf("File is opened\n");
        for(int i=0;i<length;i++)
        {
            fputc(name[i],file);//writes character one by one on the file
        }
        printf("file is written successfully");
        fclose(file);
    }
    return 0;
}