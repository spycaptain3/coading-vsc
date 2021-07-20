#include<iostream>
#include<string>

using namespace std;
int main(){

    string a,b,c;
    cout<<"type the name:"<<endl;
    cin>>a;
    cout<<"type the fname: "<<endl;
    cin>>b;

    cout<<"name:"<<a;
    cout<<"  fname: "<<b<<endl;

    int nlen= a.size();
    int fnlen= b.size();


    cout<<"size of name is :"<<nlen<<endl;

    cout<<"size of his fname is :"<<fnlen<<endl;

    cout<<"name + fname= "<<a+b;

   


    
    return 0;
}