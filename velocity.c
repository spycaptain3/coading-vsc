#include<stdio.h>
int main(){
    int v,u,a,t;
    printf("Enter the value of u: ");
    scanf("%d",&u);
    printf("\n Enter the value of a: ");
    scanf("%d",&a);
    printf("\n Enter the value of t: ");
    scanf("%d",&t);

    v=u+(a*t);

    printf("\n value of v is : %d",v);
    return(0);
}