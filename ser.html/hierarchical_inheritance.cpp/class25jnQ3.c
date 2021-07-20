//C program to sort elements in ascending order.
#include<stdio.h>
int main()
{
    int arr[25], i, j, max, min, a, n,temp;
    printf("Enter the size of the Elements: \n");
    scanf("%d",&n);
    printf("Enter the %d elements in the array : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("array after shorting:\n");
    for(a=0;a<n;a++)
    {
        printf("%d\t",arr[a]);
    }
    return 0;
}