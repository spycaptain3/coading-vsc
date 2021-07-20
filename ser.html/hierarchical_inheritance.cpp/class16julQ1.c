//Program to display Fibonacci sequence.
// 0,1,1,2,3,5,8,13,21,.......
#include<stdio.h>
int main ()
{
    int i, arr[25],j, n,sum;
    printf("Enter the number of elements in fibonacci sq: \n");
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    printf("Fibonacci series till %d elements\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}