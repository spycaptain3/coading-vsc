//Write a program in C to find the maximum and minimum element in an array..

#include<stdio.h>
int main(){
    
        int arr[10], max, min, i, j,n;
        printf("Enter the size of the array:\n");
        scanf("%d",&n);
        printf("Enter the elements in the array\n");
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        max=arr[0];
        min=arr[0];
        for(i=1;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        for(i=1;i<n;i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        printf("maximum is: %d\n minimum is %d",max,min);
        return 0;
}
