//Write a program to find the result for (a+b)^2.(Note: you
//can take value of your own)
#include<stdio.h>
int main(){
    int a,b,x;
    printf("Enter the value of a and b: \n");
    scanf("%d %d",&a,&b);
    x=(a*a)+(b*b)+(2*a*b);
    printf("(a+b)^2 =%d",x);
    return 0;
}
