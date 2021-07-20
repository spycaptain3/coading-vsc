#include<stdio.h>
int main(){
    int a,b,c, l,g;
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%d", &c);

 if(a>b){
     if(c>a){
         printf("%d is the largest",c);
     }
     else{printf("%d is the largest",a);}
 }
 else{printf("%d is the largest",b);}

 return 0;

}