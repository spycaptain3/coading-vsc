/* 4.	Write a program in C to add two numbers using pointers. 
 Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
The sum of the entered numbers is : 11 
*/
#include<stdio.h>
int main()
{
    int *p, *q, a, b,x,*y;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number: \n");
    scanf("%d",&b);
    p=&a;
    q=&b;
    x=(*p)+(*q);
    y=&x;
    printf("The sum of the entered number is : %d\n",*y);
    return 0;
}