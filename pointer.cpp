#include<iostream>
using namespace std;
int main(){
    int a =54, *g;
    g=&a;

    cout<<"adress of a is :"<<&a<<endl;
    cout<<"adress of a is :"<<g<<endl;
    cout<<"adress of g is :"<<&g<<endl;
    cout<<"value of a is:"<<*g<<endl;

    return 0;

}