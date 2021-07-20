/*Write a program to evaluate the following x=2 to 4 and
y=1 to 3.
2x^2 +4xy+ y^2
*/
#include<stdio.h>
int main(){
    int x, y, i;
    for(x=2;x<=4;x++){
        for(y=1;y<=3;y++){
            i=2*x*x+4*x*y+y*y;
            printf("for x=%d, y=%d=>2*%d^2+4*%d*%d+%d*%d=%d\n",x,y,x,x,y,y,y,i);

        }
    }
}