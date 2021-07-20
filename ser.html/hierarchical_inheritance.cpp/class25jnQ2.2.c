//C program to delete an element in an array
#include<stdio.h>
int main()
{
    int i, j, k, a, n;
    int arr[25];
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter %d element in this array: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position which you want to delete: \n");
    scanf("%d",&a);
    if(a>=0&&a<n)
    {
        for(i=a-1;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("Array after delition: \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    else{printf("Try Again your input is invalid.\n");}
   return 0;
}