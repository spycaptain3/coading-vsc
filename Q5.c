//Write a C program to sort a list of numbers in ascending order..
#include<stdio.h>
int main(){
    int arr[10],i,j,n,max,min,temp,loc;
    printf("Enter the size of the aray:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];   
    for(i=0;i<n-1;i++){
        min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++){
        if(arr[j]<min)
        {
            min=arr[j];
            loc=j;
        }
    }
      temp=arr[i];
      arr[i]=arr[loc];
      arr[loc]=temp;
    }
    
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
      return 0;
}