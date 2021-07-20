#include<stdio.h>
int main(){
    int a, b, c, d,e, f, g, h;
    printf("Enter the value of a to g:\n ");
    scanf("%d %d %d %d %d %d %d",&a, &b, &c, &d, &e ,&f ,&g);
     h=((a+b/c*d-e)*(f-g));
     printf("\n Answer is :%d",h);
    return (0);
}