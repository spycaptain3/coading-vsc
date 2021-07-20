#include<iostream>
using namespace std;
class base
{
    protected:
    int b;
    public:
    void setb (int x)
    {
        b=x;
    }
    void disp (void)
    {
        cout<<"base class"<<endl;
        cout<<"value of B: "<<b<<endl;
    }
};
class derived : public base
{
    int d;
    public:
    void setd(int y)
    {
        d=y;
    }
    void disp (void)
    {
        cout<<"derived class"<<endl;
        cout<<"value of B :"<<b<<endl;
        cout<<"value of D :"<<d<<endl;
    }
};
int main ()
{
    base *bp;
    base b;
    bp=&b;

    bp->setb(100);
    cout<<"bp points to base object"<<endl;
    bp->disp();

    derived d;
    bp=&d;
    bp->setb(200);

    cout<<"bp now point to derived object"<<endl;
    bp->disp();
    derived *dp;
    dp=&d;
    dp->setd(500);
    cout<<"Derived type pointer, "<<endl;
    dp->disp();
    cout<<"using ((derived*)bp) for casting."<<endl;
    ((derived*)bp)->setd(300);
    ((derived*)bp)->disp();
    return 0;
}