#include<iostream>
using namespace std;
 
 class A
 {
     int a;
     public:
     void getval_a (int);
     int disp_a (void);
 };
 class B : public A
 {
     int c, d,e;
     public:
     void getval_c (int);
     int disp_c (void);
     void sum_a_c (void);
     int disp_sum (void);
     
 };
 void A::getval_a(int x)
 {
     a=x;
 }
 int A::disp_a (void)
 {
     return a;
 }
 void B::getval_c (int x)
 {
     c=x;
 }
 int B::disp_c (void)
 {
     return c;
 }
 void B:: sum_a_c (void)
 {
     d=getval_a() +c;
 }
 int B:: disp_sum (void)
 {
     return d;
 }
 
 int main(){
     int a , c;
     cout<<"Enter the value of a:"<<endl;
     cin>>a;
     cout<<"Enter the value of c:"<<endl;
     cin>>c;

     B ans;
     ans.getval_a(a);
     ans.disp_a();
     ans.getval_c(c);
     ans.disp_c();
     ans.sum_a_c();
     ans.disp_sum();

     cout<<"\n This is an example of single inheritance."<<endl;

 }
