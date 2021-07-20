// Illustrates finding of addresses of an array and its
// elements.
#include<stdio.h>
int main()
{
    printf("Enter element of array: \n");
    int arr[10], i, j;
    for(i=0;i<=5;i++)
    {
        scanf("%d \n",&arr[i]);
    }
    for(i=0;i<=5;i++)
    { int *p= &arr[i];
        printf("index of array %d contain %d,\n => its address is %p\n",i,arr[i],p);

    }
    return 0;
}