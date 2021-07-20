#include<iostream>
using namespace std;

int x, y;

class time 
{
int h, m;
public: 
void gettime (int, int);
void puttime (void);
void sum (time, time);
};

void time :: gettime(int x, int y)
{
     
    cout<<"Enter the value of hour: "<<endl;
    cin>>x;
    cout<<"Enter the value of minute :"<<endl;
    cin>>y;
    h=x;
    m=y;
}
void time :: puttime(void)
{
    cout<<"Hours is equal to"<<h<<endl;
    cout<<"minute is equal to"<<m<<endl;
}
void time:: sum (time t1, time t2)
{
    m= t1.m + t2.m;
    h= m/60;
    m= m%60;
    h = h + t1.h + t2.h;
}
int main()
{
    
    class time t1, t2, t3;
    
    t1.gettime ( x ,y);
    t2.gettime(x, y);
    t3.sum(t1,t2);
    t1.puttime();
    t2.puttime();
    t3.puttime();

    return 0;
}
