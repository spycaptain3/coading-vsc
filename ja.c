#include<stdio.h>
int main(){
    int roll[20], i, j;
    printf("Enter roll: \n");
    for(i=0;i<=5;i++){
        scanf("%d\n",&roll[i]);
    }
     for(i=0;i<=5;i++){
        printf("Serial No %d store %d roll\n",i,roll[i]);
    }
    return 0;
}