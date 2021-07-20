#include<stdio.h>
int main(){
    int i, n, sum=0;

  printf("How many numbers you want to print:");
  scanf("%n",&n);
  printf("Enter the numbers: \n");
  for(i=0; i=n;i++){
      sum=i+sum;
  }
  printf("%d",sum);
  return(0);
}