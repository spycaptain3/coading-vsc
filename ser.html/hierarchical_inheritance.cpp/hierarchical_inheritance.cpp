#include<iostream>
using namespace std;
class A
{
   protected:
   int no;
   public:
   void get_no(){
       cout<<"Enter the value of no: "<<endl;
       cin>>no;
   }
};
class B : public A{
    public:
    void square(){
    cout<<"Squar of no entered is: "<<no*no<<endl;
    }
};
class c : public A{
    public:
    void cube(){
        cout<<"Cube of no entered is:"<<no*no*no<<endl;
     }
};
int main(){
    cout<<"This is a hierarchical inheritance programme example"<<endl;

    B obj_b;
    c obj_c;
    
    obj_b.get_no();
    obj_b.square();
    obj_c.get_no();
    obj_c.cube();
  
  cout<<"Thanks to run this program"<<endl;

  return 0;
}