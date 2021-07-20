//Write a C program to concatenate two Strings without using strcat( ).
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100], i=0, j=0;
    printf("Enter first string \n");
    fgets(str1, 100, stdin);
    printf("Enter second string \n");
    fgets(str2, 100, stdin);

    while(str1[i]!='\0')
    {
        i++;
    }
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("\n string after concatenate = %s",str1);
    return 0;
}