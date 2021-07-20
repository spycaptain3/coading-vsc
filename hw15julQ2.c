//2.Program to calculate the sum of n numbers entered by the user.
//(Using calloc () and free () function).
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, i, n,j, sum=0;
    printf("Enter the numbers of elements of n number:\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        ptr[i]=i+1;
        sum=sum+ptr[i];
    }
    printf("the sum is %d",sum);
    free(ptr);
    return 0;

}