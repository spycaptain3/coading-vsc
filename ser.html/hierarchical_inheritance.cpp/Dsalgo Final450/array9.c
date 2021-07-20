/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Example 1:
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
*/
#include<stdio.h>
int main()
{
    int a[25],i,j,n,k,temp;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter %d numbers(only 0 , 1, 2) in the array: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        if(k==0||k==1||k==2)
        {
            a[i]=k;
        }
        else{
            printf("It is invalid , enter again.");
        }
    } 
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array after shorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}