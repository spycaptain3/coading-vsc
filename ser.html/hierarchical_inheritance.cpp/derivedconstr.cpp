#include<iostream>
using namespace std;
class A{
int a;
public:
A(int x){
    a=x;
    cout<<"A class constructor intitilized"<<endl;
}
void dispa(void){
    cout<<"value of a is :"<<a<<endl;
}
};
class B{
    int b;
    public:
   B(int y){
       b=y;
       cout<<"B class constructor initilized"<<endl;
   }
   void dispb (void){
       cout<<"value of B: "<<b<<endl;
   }
};
class c: public B, public A{
    int m;
   public:
   c(int x, int y, int z):A(x),B(y){
      m=z;
      cout<<"c class constructor is initilized";
   }
   void dispm(void){
       cout<<"value of m: "<<m;
   }
};
int main(){
    c rishi(10,20,30);

    rishi.dispa();
    rishi.dispb();
    rishi.dispm();

    return 0;
}