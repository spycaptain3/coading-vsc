#include<iostream>
using namespace std;
int d= 450;
int main (){
   int d= 50;
    cout<<"value of d in local is"<<d<<endl;
    cout<<"value of d in global is "<<::d;
    return 0;
}