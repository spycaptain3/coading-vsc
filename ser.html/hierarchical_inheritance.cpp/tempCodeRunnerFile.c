#include<stdio.h>
int main(){
  int a, b;
  char op;
  printf("enter the operator + - * / ^ : \n");
  scanf("%c", &op);
  printf("enter the value of a \n");
 scanf("%d", &a);
  printf("enter the value of b \n");
 scanf("%d", &b);
 int result = 1;
for(int j=0; j<b; j++)
{
result *= a;
}



  switch(op){
      case '+':
  
      printf("%d/n",a+b);
      break;
  
  case'-':
  
      printf("%d\n",a-b);
      break;
  
  case '*':
  
      printf("%d \n",a*b);
      break;
  
  case '/':
  
      printf("%d \n",a/b);
      break;

      case '^':
  
      printf("%d \n",result);
      break;
   
  
  default:
  printf("Please write again/n");
  break;
  }


    return (0);
}