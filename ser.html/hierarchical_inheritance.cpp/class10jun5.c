#include<stdio.h>
int main(){
    int a, b, c,d;
    printf("enter the three sides of triangle:");
    scanf("%d",&a);
     scanf("%d",&b);
      scanf("%d",&c);

    if(a==b&&b==c){
        d=3;
    }
    else if(a==b||a==c||b==c){
        d=2;
    }
    else{d=1;}

    switch(d){
        case 3:
        printf("Equilateral Triangle");
        break;
        case 2:
        printf("Isosceles Triangle");
        break;
        case 1:
        printf("Scalene Triangle");
        break;
    }
    return 0;

}