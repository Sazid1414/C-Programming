#include<stdio.h>
int main()
{   //swapping values 
    int x=10,y=20;
    int temp;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}