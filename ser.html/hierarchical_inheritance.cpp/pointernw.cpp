#include<iostream>
using namespace std;
int main()
{
    int *p, d, a, **b;
    a=45;
    p= &a;
    d=*p+a;
    b=&p;
    cout<<"address of a is : "<<&a<<endl;
    cout<<"address of a is : "<<p<<endl;
    cout<<"value of a is : "<<a<<endl;
    cout<<"value of a is : "<<*p<<endl;
    cout<<"address of p is : "<<&p<<endl;
    cout<<"value of d is : "<<d<<endl;
    cout<<"value of b is :"<<b<<endl;
    cout<<"adress of a by b is :"<<*b<<endl;
    cout<<"value of a at b is :"<<**b<<endl;
    cout<<"address of b is : "<<&b<<endl;
    int ***z;
    z=&b;
    cout<<"value of address of b at z: "<<z<<endl;
    cout<<"value of address of p at z: "<<*z<<endl;
    cout<<"value of address of a at z :"<<**z<<endl;
    cout<<"value of address of a which is stor on z: "<<***z<<endl;
    cout<<"address of z is : "<<&z<<endl;
    int y= *p+**b+***z;
    cout<<"value of y is : "<<y<<endl;

    return 0;
}