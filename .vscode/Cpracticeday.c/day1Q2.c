//Q2 Print Nth Fibonacci number.
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …….. 
#include<stdio.h>
int main()
{
    int arr[100], i,j,sum,n,x;
    printf("Enter the value of Nth term: \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Febonacci series till Nth terms are: \n",n);
        arr[0]=0;
        arr[1]=1;
        for(i=2;i<n;i++)
        {
            arr[i]=(arr[i-1]+arr[i-2]); 
        }
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    else{
        printf("error , Enter the +ve number.\n");
    }
    return 0;
}