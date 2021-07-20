//5.Program to Add Two Complex Numbers by Passing Structure to a Function.
#include<stdio.h>
struct complexnumber 
{
    int a;
    int b;
}c,d;
void complexsum(void)
{
    printf("Enter the first comples number in the form of a+bj :\n");
    printf("a =");
    scanf("%d",&c.a);
    printf("b=");
    scanf("%d",&c.b);
    printf("\nEnter the second complex number in the form of a+bj:");
    printf("\na=");
    scanf("%d",&d.a);
    printf("b=");
    scanf("%d",&d.b);
    printf("\nSum = %d+%dj",(c.a+d.a),(c.b+d.b));

}

int main()
{
    complexsum();
    return 0;
}

 