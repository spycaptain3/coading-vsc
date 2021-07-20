//Q1 Program to create, initialize, assign and access a pointer variable.
#include<stdio.h>
int main()
{
    int *p, a, b;
    b=55;
    p=&b;
printf("value of b is : %d",*p);
return 0;
}