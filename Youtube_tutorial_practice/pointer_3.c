#include<stdio.h>
int main()
{
    int x=10,y=20;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    int sum=*ptr1 + *ptr2;
    printf("sum=%d\n",sum);
    return 0;
}