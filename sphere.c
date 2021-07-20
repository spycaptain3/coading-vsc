#include<stdio.h>
int main(){
    int r, a;

    printf("Enter the Radius: \n");
    scanf("%d",&r);
     a= 4*3.14*r*r;
    printf("Area of sphere of radius %d is: %d ",r,a);
   
    return(0);
    
}