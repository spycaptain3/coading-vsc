#include<iostream>
using namespace std;
int main(){
    char father ='f', *son;
    
    son=&father;
    cout<<"adress of father will be:"<< &father<<endl;
    cout<<"adress of father will be also:"<<son<<endl;
    cout<<"adress of son will be :"<<&son<<endl;
    cout<<"but the value which store on the son of father is"<<*son;

    return 0;
}