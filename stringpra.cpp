#include<iostream>
#include<string>
using namespace std;
int main(){
    string dog;
    cout<<"Write something about dog:"<<endl;
    getline(cin,dog);
    cout<<"You have entered about dog is:"<<endl;
    cout<<dog;
    dog.push_back('h');
    cout<<"\n"<<dog;
    return 0;
}