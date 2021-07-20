//C program to delete an element in an array
#include<stdio.h>
int main()
{
    int i,j,n,a;
    int arr[]={2,4,1,78,43,67,4,9,2,6,98};
    printf("Enter the adress which you want to delete : \n");
    scanf("%d",&a);
    for(i=a;i<11;i++){
        arr[a]=arr[a+1];
    }
    printf("Element after deleting the element on %d is\n",a);
    for(i=0;i<11;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}