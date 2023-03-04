#include<stdio.h>
int main()
{
    //accecing array by pointer
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;

}