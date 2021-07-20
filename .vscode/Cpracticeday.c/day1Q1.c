//Write a C program to read in two numbers, x and n, and 
// then compute the sum of this geometric progression:
// 1+x+x 2 +x 3 +………….+x n . 
//For example: if n is 3 and x is 5, then the program computes
// 1+5+25+125. Print x, n, the sum. Perform error checking. For example, the formula does not make sense for negative exponents – if n is less than 0. Have your program print an error message if n&lt;0, then go back and read in the next pair of numbers of without computing the sum. Are any values of x
// also illegal? If so, test for them too.

#include<stdio.h>
int main()
{
    int x, n, sum=1, i,j,total, k=1;
    printf("Enter the value of x: \n");
    scanf("%d",&x);
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    if(n>1||x>1)
    {
        for(i=1;i<=n;i++)
        {
           for(j=1;j<=i;j++)
           { 
               k=k*x;
           }
           
           sum=sum+k;
           k=1;
          
        }
        printf("value of sum is %d\n",sum);

    }
    else{
        printf("It is an error. \n");
    }
    return 0;
   
}
