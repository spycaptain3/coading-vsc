//5.Program to Add Two Complex Numbers by Passing Structure to a Function.
#include<stdio.h>
typedef struct complexnumber 
{
    int a;
    int b;
}complexint;
  void sum(complexint n1, complexint n2)
{
    complexint total;
    total.a=n1.a+n2.a;
    total.b=n1.b+n2.b;
    printf("%d+%dj\n",total.a,total.b);
}

 int main()
{
    complexint n1, n2, result;
    printf("Enter the value of first complex number in the form of a+bj:\n");
    scanf("%d %d",&n1.a,&n1.b);
    printf("Enter the second number in the form of a+bj : \n");
    scanf("%d %d",&n2.a, &n2.b);
    printf("sum of these two complex number is: \n");
    sum(n1,n2);
    return 0;
    
}