#include<stdio.h>
int main()
{
    int size;
    float sum=0.0;
    float avg;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++)
    {
   
        scanf("%d",&arr[i]);

    }
    printf("Array Elements : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i] );
        
        sum+=arr[i];
    }
    printf("\nThe sum of the elements is:%.2f\n",sum);
    avg=sum/size;
    printf("The average is:%.2f \n",avg);
    return 0;

}