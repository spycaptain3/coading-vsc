#include<iostream>
using namespace std;
int main()
{
    int arr[25], i, j, n,temp;
    cout<<"Enter the size of the array: \n";
    cin>>n;
    cout<<"Enter the "<<n<<" elements in the array: \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array after reversing : \n";
    for(i=0;i<((n-1)-i);i++)
    {
        if(i<((n-1)-i))
        {
            temp=arr[i];
            arr[i]=arr[(n-1)-i];
            arr[(n-1)-i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
