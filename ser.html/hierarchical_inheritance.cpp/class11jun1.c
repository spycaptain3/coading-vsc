#include<stdio.h>
int main(){

        int  p, n , count;
        count=1;
        float r, si;
        while (count<=3)
        {
            printf("Enter the value of p, n &r\n");
            scanf("%d %d %f",&p,&n,&r);
            si=(p*n*r)/100;
            printf("si=%f",si);
            count=count+1;
        }
        return 0;
    }
