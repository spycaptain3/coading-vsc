//3. Program uses calloc () to create dynamic (it can vary in size at runtime) 1-D array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, i, j,n,sum=0;
    printf("Enter the number of elements you want to creat dynamicaly :\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the %d elements in it: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
       sum=sum+ptr[i];
    }
    printf("Total sum of these %d numbers is %d",n,sum);
    return 0;
}