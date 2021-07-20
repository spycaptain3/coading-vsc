/* 6. Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
 The sum of 5 and 6  is 11 */
 
 #include<stdio.h>
 long add(long *,long *);
 int main()
 {
     long *x, *y,*p,*q,a,b;
     printf("Enter the first number: \n");
     scanf("%ld",&a);
     printf("Enter the second number: \n");
     scanf("%ld",&b);
     
     add(&a,&b);
     return 0;
 }
long add(long *x,long *y)
{
    long sum;
    sum=((*x)+(*y));
    printf("%ld",sum);
    return sum;
}