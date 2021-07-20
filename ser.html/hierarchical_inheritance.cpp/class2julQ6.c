/*5.	Write a program in C to find the maximum number between two numbers using a pointer. 
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
6 is the maximum number. 
*/
#include<stdio.h>
int main()
{
    int a, b, *p,*q;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number: \n");
    scanf("%d",&b);
    p=&a;
    q=&b;
    if((*p)>(*q))
    {
        printf(" %d is the maximum number\n",*p);
    }
    else{
        printf(" %d is the maximum number\n",*q);
    }
    return 0;
}