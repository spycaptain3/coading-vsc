#include <iostream>
using namespace std;

void Binary (int n);
 

int main()
{
int n;
cout<<"Enter a number to covert it into Binary: \n";
cin>>n;
cout<<"Binary number is: \n";
   
    Binary(n);
    return 0;
}
 void Binary (int n)
{
   
    int arr[32];
 
    int i = 0;
    while (n > 0) {
 
        
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    
    for (int j = i - 1; j >= 0; j--)
        cout << arr[j];
}
 