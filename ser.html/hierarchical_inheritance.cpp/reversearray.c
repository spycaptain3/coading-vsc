#include<stdio.h>
int main()
{
    int arr[20],i,j,n,temp;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter %d elements in the array: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements after reversing: \n");
    for(i=0;i<((i+n)/2);i++)
    
    {
       temp=arr[i];
       arr[i]=arr[n-i];
       arr[n-i]=temp;
    }
       
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}