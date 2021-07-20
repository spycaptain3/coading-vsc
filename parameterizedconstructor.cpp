#include<iostream>
using namespace std;

class testoooo
{
   int a, b, c;
   public:
   
   testoooo(int x, int y)
   {
       a=x;
       b=y;
   }
   void display (void)
   {
       cout<<"value of a is "<<a<<endl;
       cout<<"value of b is "<<b;
   }
};
int main(){
    testoooo t(11,4);
    t.display();
    return 0;


}