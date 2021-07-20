//Ques 2. Let us write a simple program that demonstrates
//unary bitwise logical operators.// (left/right shift).

#include<stdio.h>
int main(){
    int a, b, c, d, e;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("\n Enter the value of b:");
   scanf("%d",&b);

    //Unary Bitwise logical left shift operator. 
    c= a<<b;
    printf("\nvalue of c is: %d",c);
    // Bitwise logical Right shift operator
    d= a>>b;
    printf("\nvalue of d is : %d",d);
    
      return (0);
}