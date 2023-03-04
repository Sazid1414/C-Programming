#include<stdio.h>
int main()
{
    //arrray searching (linear search)
    int arr[6]={10,15,15,25,25,35};
    int value,position;
    printf("Enter the value: ");
    scanf("%d",&value);
    for(int i=0;i<6;i++)
    {
        if(arr[i]==value)
        {
            printf("The value founded.\n");
            printf("The position is : %d ",i);

            return 0;
        }
        

    }
    printf("The value not found !");
    return 0;

}