#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20]=" loves Sazidur Rahman";
    int length=strlen(name);
    
    file=fopen("test.txt","a");//appand(a) add new info to the file 
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