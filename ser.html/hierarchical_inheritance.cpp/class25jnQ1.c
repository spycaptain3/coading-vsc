//C program to insert an element in an array
#include<stdio.h>
int main ()
{
    int i, j,n,a,d,temp;
    int arr[]={4,2,6,8,2,9,10,55,22};
    printf("Enter the index where you want to store: \n");
    scanf("%d",&a);
    printf("Enter the element which you want to store on the index %d\n",a);
    scanf("%d",&d);
    for(i=8;i>=a;i--){
        arr[i+1]=arr[i];
    }
    arr[a]=d;
     printf("Array after intserting %d is \n",d);
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}