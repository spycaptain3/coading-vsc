//Program to check prime or Armstrong number using user defined function.
#include <stdio.h>
#include<math.h>
void prime(int);
void armstrong(int);
int main()
{
  int n;
  printf("Enter the number :\n");
  scanf("%d",&n);
 prime(n);
 armstrong( n);
  return 0;
}
void prime(int y)
{
    int i,ans;
    for(i=2;i<y;i++)
  {
      ans=y%i;
      if(ans==0)
      {
          printf("It is not prime\n");
          goto end;
      }
  }
   printf("It is prime\n");
      end:   ;

}
void armstrong(int x)
{
    int copy,re,d,f=0;
    copy=x;
    while(copy!=0)
    {
        copy=copy/10;
        d++;
    }
    copy=x;
    while(copy!=0)
    {
        re=copy%10;
        f=f+pow(re,d);
        copy=copy/10;
    }
    if(f==x)
    {
        printf("It is Armstrome number\n");
    }
    else{printf("It is Not an Armstrome number\n");}
}