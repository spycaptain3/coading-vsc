#include<stdio.h>
int main(){
    int num;
    printf("Enter week number:");
    scanf("%d",&num);
    
    switch(num)
    {
        case (1):
        printf("Monday");
        break;
        case(2):
        printf("Tuesday");
        break;
        case(3):
        printf("wednesday");
        break;
        case(4):
        printf("Thursday");
        break;
        case(5):
        printf("friday");
        break;
        case(6):
        printf("saturday");
        case(7):
        printf("sunday");
        break;

        default:
        printf("only 7 days in a week");
    }
     return 0;
}