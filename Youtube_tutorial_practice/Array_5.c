#include<stdio.h>
int main()
{
    //fibonacci series
    int size;
    printf("Enter The Size of fibonacci Series: ");
    scanf("%d",&size);
    int arr[size];
    arr[0]=0;
    arr[1]=1;
    if(size>2)
    {
        
        for(int i=2;i<size;i++)
        {
            arr[i]=arr[i-2]+arr[i-1];
            
        }
    }
    else if(size==2)
    {
        printf("Fibonacci Series is:%d , %d ",arr[0],arr[1]);
    }
    else if(size==1)
    {
        printf("Fibonacci series is:%d ",arr[0]);
    }
    else if(size<1)
    {
        printf("Fibonacci Series does not exists!");
    }
    printf("Fibonacci Series is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}