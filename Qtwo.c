#include<stdio.h>
int main(){

    int x= 12;
    int y=1;
    printf("Initial vlaue of x = %d \n", x);
    printf("Initial value of y= %d\n\n",y);

    y= x++;

    printf ("After incrementing by 1: x= %d\n", x);
    printf ("y= %d\n\n", y);

    y= x++;

    printf("After decrementing by 1: x= %d\n", x);
    printf("y=%d\n\n", y);

    return 0;
}