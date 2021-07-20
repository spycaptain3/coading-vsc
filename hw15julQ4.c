//4.Program to demonstrate the use of realloc () function.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, n,i,m,r,j,sum=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the %d elements to get total sum: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
        sum=sum+ptr[i];
    }
    printf("Do you want to add more mumbers ?..if yes then type 1 or if no then type 0:\n ");
    scanf("%d",&j);
    if(j==1)
    {
        printf("Enter how many more numbers you want to add: \n");
        scanf("%d",&m);
        r=m+n;
        ptr=realloc(ptr,r*sizeof(int));
        printf("Enter the %d more numbers to total sum \n",m);
        for(i=n;i<r;i++)
        {
            scanf("%d",&ptr[i]);
            sum=sum+ptr[i]; 
        }
    }
    printf("Total sum is: %d\n",sum);
    return 0;
}