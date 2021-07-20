#include<stdio.h>
int main(){
    int a, b, temp;
    printf(" enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("value of a after swape is : %d",a);
    printf("\n value of b after swaping is : %d",b);
    return(0);
}