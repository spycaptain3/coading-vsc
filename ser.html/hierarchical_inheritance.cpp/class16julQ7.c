// 7.Program to find largest number using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,j,temp;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the %d elements below:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Elements are: \n");
    int max=ptr[0];
    for(i=1;i<n;i++)
    {
        if(ptr[i]>max)
        {
            max=ptr[i];
        }
    }
    printf("largest number in it is: %d\n",max);
    free(ptr);
    return 0;
}