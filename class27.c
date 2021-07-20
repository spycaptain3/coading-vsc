#include<stdio.h>
int main(){
    int a=12 , b=3, result;
    result= ((a==4)&&(b<2));
    printf("result=%d",result);
    result= ((a>100)&&(b<10));
    printf("\nresult=%d",result);
    result= (a&&b);
    printf("\nresult=%d",result);
    result= (a&&0);
    printf("\nresult=%d",result);
    result= ((a==11)&&(a++));
    printf("\nresult=%d",result);

   return 0;
}