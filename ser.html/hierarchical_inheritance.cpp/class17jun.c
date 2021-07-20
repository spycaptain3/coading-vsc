#include<stdio.h>
int main()
{
    char name[30];
    printf("enter numbrer:");
    fgets(name,sizeof(name),stdin);
    printf("name");
    puts(name);
    return 0;
}