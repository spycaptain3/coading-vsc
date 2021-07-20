#include<iostream>
using namespace std;
class base
{
    int a;
    public:
    base(int x)
    {
        a=x;
    }
    void dispa(void)
    {
        cout<<"value of A is:"<<a<<endl;
    }
};
class derived:public base
{
    int b;
    public:
    derived(int x, int y): base(x),b(y)
    {
        cout<<"Derived class constructor initialized";
    }
    void dispb(void)
    {
        cout<<"value of b:"<<b;
    }
};
int main(){
    derived rishi(10, 20);
    rishi.dispa();
    rishi.dispb();
    
    return 0;
}