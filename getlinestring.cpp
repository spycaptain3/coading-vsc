#include<iostream>
#include<string>
using namespace std;


int main(){
    string l;
    cout<<"Enter a string: ";
    getline(cin, l);
    cout<<"you entered: ";
    cout<<l<<endl;

    l.pop_back();
    cout<<"the deleted from back side is: "<<l<<endl;

    l.push_back('B');
    cout<<"the string after push_back is : "<<l<<endl;

    return 0;

}


