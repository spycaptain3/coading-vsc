//3.Program to read array elements and print with addresses.
#include<stdio.h>
int main()
{
    int arr[25],i,n,j,p;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the %d elements in the array: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Address of array of index %d is %d\n",i,&arr[i]);
    }
    return 0;
}