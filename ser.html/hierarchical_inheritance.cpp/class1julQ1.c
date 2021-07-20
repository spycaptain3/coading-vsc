//1. Program the function, which takes an array as an argument along with another argument and based on the passed arguments, it returns the average of the numbers passed through the array. Take array of 7 elements.
#include<stdio.h>
int average(int arr[],int n);
int main()
{
    int arr[25],n,i,j;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter %d element in the array: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    average(arr,n);
    return 0;
}
int average(int arr[],int n)
{
    float j=0;
   for(int i=0;i<n;i++)
   {    
        j+=arr[i];
   }
   printf("average is : %f",(j/n));
   return (j/n);
}