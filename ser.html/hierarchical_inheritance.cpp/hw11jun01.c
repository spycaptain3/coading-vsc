#include<stdio.h>
int main()
{
    
  int n, i,b=1 ;
  
  printf("Enter Number:");
  scanf("%d",&n);
  if(n>0){
  for(i=1; i<=n; i++){
       b*=i;
  }
  printf("%d",b);
    }
    else{printf("enter more than 1");}
    return 0;
}