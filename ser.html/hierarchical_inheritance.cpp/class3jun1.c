#include<stdio.h>
int main(){
    int qty, dis=0;
    float rate, tot;
    printf("enter to rate & qty\n");
    scanf("%f %d", &rate, &qty);
    if (qty>1000){
        dis=10;
        }
        tot=(qty * rate)-((qty*rate*dis)/100);
        printf("Total expense %f", tot);
       
    return (0);
}