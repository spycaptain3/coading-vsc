#include<stdio.h>
int main(){
    int a=10, b=9, result;
    result= !(a>5);
    printf("\nresult=%d",result);
    result= !(a==4);
    printf("\nresult=%d",result);
     result= !(a||b);
    printf("\nresult=%d",result);
     result= !(a&&b);
    printf("\nresult=%d",result);
     result= !(a<4);
    printf("\nresult=%d",result);
     result= !(a>10);
    printf("\nresult=%d",result);
    

    return 0;
}