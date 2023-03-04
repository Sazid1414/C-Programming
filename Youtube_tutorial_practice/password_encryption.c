#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 int encrypt(char *password)
    {
        for(int i=0;i<strlen(password);i++)
        {
            password[i]+=5;
        }
    }

    int decrypt(char *password)
    {
        for(int i=0;i<strlen(password);i++)
        {
            password[i]-=5;
        }
    }
int main()
{
    char password[50];
    FILE *file;
    file=fopen("password_encryption.txt","r");
    if(file==NULL)
    {
        printf("No password has been set.\nPlease enter a password : ");
        gets(password);
        encrypt(password);
        file=fopen("password_encryption.txt","w");
        fprintf(file,"%s",password);
        fclose(file);
        
    }
    else
    {
        decrypt(password);
        char input[50];
        printf("Please enter your password: ");
        gets(input);
        if(strcmp(input,password)==0)
        {
            printf("Welcome Teacher \n");
        }
        else
        {
        
            printf("Incorrect password!");
        }
    }
    return 0;
}


   