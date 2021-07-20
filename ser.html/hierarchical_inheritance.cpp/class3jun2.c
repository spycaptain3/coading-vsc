#include<stdio.h>
int main(){
    int qty, dis=0;
    float rate, tot;
    printf("enter to rate & qty\n");
    scanf("%f %d", &rate, &qty);
    if (qty>500){
        dis=5;
        }
    if (qty>1000){
        dis= 10;
    }
    if (qty>1500){
        dis=15;
    }
    if (qty>2000){
        dis=20;
    }
        tot=(qty * rate)-((qty*rate*dis)/100);
        printf("Total expense %f", tot);
       
    return (0);
}