#include<stdio.h>
#include<math.h>
int main()
{
    int no,n,copy, i, j, d=0;
    printf("Enter the Number: \n");
    scanf("%d",&no);
    copy=no;
    while(copy!=0)
    {
        copy=copy/10;
        n++;
    }
    copy=no;
    while(copy!=0)
    {
        j=copy%10;
        d=d+pow(j,n);
        copy=copy/10;
    }
    if(d==no)
    {
        printf("It is armstrome number\n");
    }
    else{printf("Not Armstrome number\n");}
    return 0;
}