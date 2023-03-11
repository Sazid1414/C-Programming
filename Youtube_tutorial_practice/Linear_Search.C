#include<stdio.h>
#include<time.h>
int Linear_Search(int array[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]==x)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
    int n,x;
    clock_t t;
    printf("Enter The Size Of Array:");
    scanf("%d",&n);
    printf("Enter The Element:");
    scanf("%d",&x);
    printf("Enter a Sorted Array:");
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    
    t=clock();
    Linear_Search(array,n,x);
    t=clock()-t;
    printf("%d",Linear_Search(array,n,x));
    printf("\n%f",1000*((float)t/CLOCKS_PER_SEC));
    
}