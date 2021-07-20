//6. Program to access elements of an array using pointer.
#include<stdio.h>
int main()
{
    int arr[25],i,j,ptr,n;
    printf("Enter the number of elements in array: \n");
    scanf("%d",&n);
    printf("Enter the %d elements in it\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*arr+i);
    }
    return 0;

}