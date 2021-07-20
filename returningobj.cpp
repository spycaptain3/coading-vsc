#include<iostream>
using namespace std;
 int main(){
     int arr[1000], N, i;
     cin>>N;
     cout<<endl;
     for(i=0; i<N; i++){
         cin>>arr[i];
     }
     for(i=N-1; i>=0; i--){
         cout<<arr[i];
     }
     return 0;
 }