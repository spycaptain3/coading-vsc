#include<iostream>
using namespace std;
class name
{
    int m;
    public:
    void setdata (int m)
    {
        this->m =m;
    }
    void dispname ()
    {
        cout<<"Value of m after this pointer is : "<<m<<endl;
        cout<<"value of m using *this.m is : "<<(*this).m<<endl;
        cout<<"value of m usin this->m is : "<<this->m<<endl;
    }
};
int main ()
{
    name obj;
    obj.setdata(25);
    obj.dispname();
    
    
    return 0;
}