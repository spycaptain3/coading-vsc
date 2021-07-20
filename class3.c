//Ques 3. Let us write a simple program that demonstrates
//Bitwise complement operator.

#include<stdio.h>
int main(){
    int a, c;
   printf("Enter the value of a:");
   scanf("%d",&a);

    //Bitwise Complement operator. 
    c= ~a;
    printf("\nvalue of c is: %d",c);
     return (0);
}