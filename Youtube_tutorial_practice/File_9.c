#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char fch[20];
    char mch[20];
    char lch[20];
    int num;
        
    file=fopen("test.txt","r");//r reads from the file
    if(file==NULL)
    {
        printf("File does not exists");
    }
    else
    {
        printf("File is opened\n");
       //fscanf(file_pointer,format_specifier,variable_name)
       fscanf(file,"%s %s %s %d",&fch,&mch,&lch,&num);//cause string is end when it finds an space
       printf("%s %s %s %d\n",fch,mch,lch,num);
       printf("file is read successfully");
        fclose(file);
    }
    return 0;
}
