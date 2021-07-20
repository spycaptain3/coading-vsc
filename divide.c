#include<stdio.h>
int main(){
    int d, n, q, r;
 printf("Enter the value of dividen :\n");
 scanf("%d",&n);

 printf("Enter the value of divisor: \n");
 scanf("%d",&d);
 printf("n/d=\n");
  q=n/d;
 printf("Quotient= %d,\n",q);
  r=n%d;
 printf("remainder= %d",r);


return(0);
}