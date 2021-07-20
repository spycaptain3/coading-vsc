#include <iostream>
using namespace std;

class sum
{
    int a,b,t;

    public :
     void getdata (void);
     void putdata (void);

};

void sum :: getdata (void)
{
    cout<<"Enter the value of A and B"<<endl;
    cin>>a>>b;
}

void sum:: putdata (void)
{
    t=a+b;
    cout<<"sum of"<< a <<"and" <<b <<"is :"<<t;
}
int main()
{
cout<<"printing of sum of two number using class and object\n";

sum obj;
obj. getdata();
obj. putdata();
return 0;
}