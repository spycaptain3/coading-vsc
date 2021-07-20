//Q4 Program to find sum on n natural numbers using recursion.
#include<stdio.h>
int sum(int n)
{
    if(n<1)
    {
        return 0;
    }
    return(n+sum(n-1));
    };
int main()
{
    int n,i,j;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    printf("the sum of %d natural number is : %d\n",n,sum(n));

}