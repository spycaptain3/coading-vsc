//Write a program to generate the table of Boolean
//expression (a&&b).
#include<stdio.h>
int main(){
    int a, b;
   printf("Enter the value of a and b\n");
        for(int i=1;i<=4;i++){
           
    scanf("%d %d",&a,&b);
    printf("Boolean table of %d && %d = %d \n",a,b,a&&b);
    }
    return 0;
}
