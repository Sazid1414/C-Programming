#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char ch[40];
        
    file=fopen("test.txt","r");//r reads from the file
    if(file==NULL)
    {
        printf("File does not exists");
    }
    else
    {
        printf("File is opened\n");
        //fgets(variable,size,file_pointer)
       while(!feof(file))
       {
         fgets(ch,30,file);
         printf("%s\n",ch);
       }
        printf("file is read successfully");
        fclose(file);
    }
    return 0;
}
