#include<stdio.h>
int main()
{
    int size;
    printf("Enter The size of Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Array Elements:");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(max<=arr[i])
        {
            max=arr[i];
            
        }
        if(max>arr[i])
        {
            min=arr[i];
        }
       

    }
    printf("The maximum number is: %d\n",max);
    printf("The minimum number is: %d ",min);
    return 0;
}