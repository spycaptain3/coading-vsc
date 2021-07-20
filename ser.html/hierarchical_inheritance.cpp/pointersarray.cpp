#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int *p, i;
    p=arr;
    cout<<"Elements are: \n";
    int sum=0;
    for(i=0;i<5;i++)
    {
        cout<< *p;
        sum= sum+ *p;
        p++;
    }
    cout<<"\n total:"<<sum;
    return 0;
}