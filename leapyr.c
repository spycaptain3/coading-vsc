#include<stdio.h>
int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("\nThis is leap year");
            }
            else{printf("This is not leap year");}
        }
        else{printf("This is not leap year");}
    }
    else{printf("This is not leap year");}
    return 0;
}