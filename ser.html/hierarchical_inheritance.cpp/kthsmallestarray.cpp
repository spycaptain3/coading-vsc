//Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
#include<iostream>
using namespace std;
int main()
{
    int arr[25], i, j,n,temp,kth;
    cout<<"N= ";
    cin>>n;
    cout<<"\narr[]=";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"\nk=";
    cin>>kth;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    cout<<arr[kth-1];

    return 0;
}