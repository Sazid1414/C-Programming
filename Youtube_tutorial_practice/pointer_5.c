#include<stdio.h>
int swapping( int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;


}
int main()
{
    //swapping by function
    int x=10,y=20;
   
    printf("Before swapping x=%d\n",x);
    printf("Before swapping y=%d\n",y);
    swapping(&x,&y);
    printf("After swapping x=%d\n",x);
    printf("After swapping y=%d\n",y);
    return 0;
}
