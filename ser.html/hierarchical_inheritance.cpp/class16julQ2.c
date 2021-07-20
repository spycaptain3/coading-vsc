//Program to display prime numbers between two intervals.
//eg 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,.....
#include<stdio.h>
int main()
{
    int n,s,e,i,j;
    printf("Enter the starting number of interval : \n");
    scanf("%d",&s);
    printf("Enter the ending number of interval: \n");
    scanf("%d",&e);
    printf("Prime number between %d and %d are: \n",s,e);
    for(i=s;i<e;i++)
    {
    
       for(j=2;j<i;i++)
       {
           n=i;
           if(n%j==0)
           {
               goto notprime;
           }
           else{printf("%d is prime\n",n);}
       }
       notprime: ;
    }
    return 0;
}