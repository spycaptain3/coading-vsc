#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void dispa(){
        a=10;
        cout<<"vlaue of a is :"<<a<<endl;
    }
};
class B: virtual public A{
    int b;
    public:
    void dispb(){
        b=20;
        cout<<"value of b is: "<<b<<endl;
    }
};
class C: public virtual A{
    int c;
    public:
    void dispc(){
        c=30;
        cout<<"value of c is :"<<c<<endl;
    }
};
class D: public B, public C{
    int d;
    public:
    void dispd(){
    d=40;
    cout<<"class D is :"<<d<<endl;
    }
};
int main(){
    D rishi;

    rishi.dispa();
    rishi.dispb();
    rishi.dispc();
    rishi.dispd();

    return 0;
}