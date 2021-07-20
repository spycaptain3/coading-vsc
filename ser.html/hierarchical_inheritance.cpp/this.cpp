#include<iostream>
using namespace std;
class num
{
    int no;
    public:
    void setdata (int no)
    {
        (*this).no=no;
    }
    void getdata ()
    {
        cout<<"value of no is: "<<no<<endl;
    }
};
int main()
{
    num obj;
    obj.setdata(45);
    obj.getdata();
    return 0;
}