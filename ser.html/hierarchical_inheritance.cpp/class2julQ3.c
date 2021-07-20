//2.	Program to reverse a string using pointer
#include<stdio.h>
#include<string.h>
int main()
{
  char *name;
  char intro[55];
  printf("Enter your name: \n");
  fgets(intro,34,stdin);
  name= intro;
  printf("name after reversing: \n");
  for(int i=34;i>=0;i--)
  {
      printf("%c",name[i]);
  }
  return 0;

}