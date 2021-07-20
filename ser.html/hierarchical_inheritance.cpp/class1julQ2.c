//2.	Program to pass string to a function and print in C.
#include<stdio.h>
#include<string.h>
void pass(char[]);
int main ()
{
    
    int i, j;
    char str[50]="SRMIST Ghaziabad";
    pass(str);
    return 0;
}
void pass(char str[])
{
    printf("%s",str);
    printf("\nDelhi NCRss");
}