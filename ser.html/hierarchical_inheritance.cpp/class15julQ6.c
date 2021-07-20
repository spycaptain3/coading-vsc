/*1.Program to calculate the sum of n numbers entered by the user. (Using malloc () and free () function).
2.	Program to calculate the sum of n numbers entered by the user. (Using calloc () and free () function).
3.	Program uses calloc () to create dynamic (it can vary in size at runtime) 1-D array.
4.	Program to demonstrate the use of realloc () function.*/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr, i, j,n;
    printf("Enter the value number of elements to add: \n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    
    
}