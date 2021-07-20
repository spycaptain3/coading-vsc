//Ques 1. Let us write a simple program that demonstrates
//bitwise logical operators. (AND ,OR,XOR).
#include<stdio.h>
int main(){
    int a, b, c, d, e;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("\n Enter the value of b:");
   scanf("%d",&b);

    //Bitwise And operator
    c= a&b;
    printf("\nvalue of c is: %d",c);
    // Bitwise OR operator
    d= a|b;
    printf("\nvalue of d is : %d",d);
    // Bitwise XOR operator
    e= a^b;
    printf("\nvalue of e is : %d",e);
      return (0);
}