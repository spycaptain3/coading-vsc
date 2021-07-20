//4.	Program swapping two numbers using Pointers.
#include<stdio.h>
int main ()
{
    int *p, *n, temp,a,b;
    printf("Enter the two number a and b: \n");
    scanf("%d %d",&a,&b);
    
    p=&a;
    n=&b;
    printf("Before swaping a= %d and b=%d\n",a,b);
    temp=*p;
    *p=*n;
    *n=temp;
    printf("After swaping a=%d and b=%d\n",a,b);
}