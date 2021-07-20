//Ques 4.write a program to swap two numbers without
//using temporary variable .( The bitwise XOR operator can be used
//to swap two variables. The XOR of two numbers x and y returns a number
//that has all the bits as 1 wherever bits of x and y differ)
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("\n Enter the value of b:");
    scanf("%d",&b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("after swaping of a and b is :%d %d",a,b);
    return 
    
}