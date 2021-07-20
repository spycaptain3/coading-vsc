#include <iostream>
using namespace std;

void delete(int, int,int);

int i, arr[20], size=5, index;

int main(){
    cout<<"Enter the 5 elements: "<<endl;

    for(i=0; i<5; i++){
    cin>>arr[i];
    }
    cout<<"Your entered elements are: ";
    for(i=0; i<5; i++){
        cout<<arr[i]<<"\n";
    
    }
    cout<<"Enter the index number which you want to delete: "<<endl;
    cin>>index;
    cout<<"Elements after deleting that index : "<<endl;
    void delete(size, i, index );
    return 0;
}

void delete(int size,int i,int index)
{
   for(i=index; i<size-1; i++){
       arr[i]= arr[i+1];
   }
   for(i=0; i<size-1; i++){
       cout<<arr[i];
   }

}
