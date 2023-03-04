#include<stdio.h>
int main()
{
    int x=5;
    int *ptr;
    ptr=&x;
    printf("Value of x=%d\n",x);//prints the value of x
    printf("Address of x=%d\n",&x);//prints the adress of x
    printf("Adress of p=%d\n",ptr);//prints the adress of x
    printf("Content of p=%d\n",*ptr);//prints the value of x
    printf("Adress of p=%d\n",&ptr);//prints the adress of ptr

    return 0;
}