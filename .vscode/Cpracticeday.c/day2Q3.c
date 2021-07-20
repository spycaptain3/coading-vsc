//Write C programs that use both recursive and non-recursive functions
//To solve towers of Hanoi problem
#include<stdio.h>
void Hanoinonrecursion(int num,char sndl,char indl,char dndl)
{
char stkn[100],stksndl[100],stkindl[100],stkdndl[100],stkadd[100],temp;

 
int top,add;
top=NULL;
one:
if(num==1)
{
printf("\n Move top disk from needle %c to needle %c",sndl,dndl);
goto four;
}
two:
top=top+1;
stkn[top]=num;
stksndl[top]=sndl;
stkindl[top]=indl;
stkdndl[top]=dndl;
stkadd[top]=3;
num=num-1;
sndl=sndl;
temp=indl;
indl=dndl;
dndl=temp;
goto one;
three:
printf("\n Move top disk from needle %c to needle %c",sndl,dndl);
top=top+1;
stkn[top]=num;
stksndl[top]=sndl;
stkindl[top]=indl;
stkdndl[top]=dndl;
stkadd[top]=5;
num=num-1;
temp=sndl;
sndl=indl;
indl=temp;
dndl=dndl;
goto one;
four:
if(top==NULL)
return;
num=stkn[top];
sndl=stksndl[top];
indl=stkindl[top];
dndl=stkdndl[top];
add=stkadd[top];
top=top-1;

 
if(add==3)
goto three;
else if(add==5)
goto four;
}
void main()
{
int no;
printf("Enter the no. of diss to be transferred:");
scanf("%d",&no);
if(no<1)
printf("\n There's nothing to move");
else
printf("\n nonrecursive");
Hanoinonrecursion(no,'A','B','C');
}
