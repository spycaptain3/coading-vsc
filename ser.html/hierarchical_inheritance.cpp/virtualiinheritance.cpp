#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    void dispa(){
        a=10;
        cout<<"class A"<<a;
    }
};
class B: Public virtual A
{
    int b;
    public:
    
}