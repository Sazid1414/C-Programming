#include<stdio.h>
int main()
{
    //copy array to another array
    int arr2[5];
    int arr1[5]={10,20,30,40,50};
    printf("Array 1:");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nArray 2:");
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
        printf("%d ",arr2[i]);
    }
    return 0;
  


}