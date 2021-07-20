//1. Program to calculate the sum of n numbers entered by the user. (Using malloc () and free ()
//function).
#include<stdio.h>
#include<stdlib.h>
int *ptr, i,j,n,sum=0;
int main()
{
    printf("Enter the numbers of elements: \n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        ptr[i]=i+1;
        sum=sum+ptr[i];
    }
    printf("%d",sum);
    free(ptr);
    return 0;
}