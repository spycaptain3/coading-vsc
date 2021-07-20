#include<stdio.h>
int main()
{
    float sum;
    float i;
    printf("Enter number:");
    do{
        scanf("%f",&i);
        sum+=i;
        i++;
    }while(i<=8);
    printf("value of sum of it is :%f",sum);
    return 0;   
}