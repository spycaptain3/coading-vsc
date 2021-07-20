#include<stdio.h>
int main(){
   int msa , msb, msc, msd, mse , total;
   float per;
   printf("enter the marks of 5 subject\n");
   scanf("%d %d %d %d %d", &msa, &msb, &msc ,&msd, &mse);
   per = ((msa+msb+msc+msd+mse)/500)*100;

   if (per>= 60){
       printf("1st Devision");

   }
   else if (per>= 50&&per<60){
       printf("2nd Devision");

   }
   else if (per>= 40 && per<50){
       printf("3rd Devision");

   }
   else {
       printf("1st Devision");
   }
}