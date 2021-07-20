#include<iostream>
using namespace std;
class marks{
  int a, b, c;
  public:
 
   marks();
   marks(int x);
   marks(int x, int y);
   marks(int x, int y, int z);

   void display();
};
marks::marks(){
    a=0;
    b=0;
}
marks::marks(int x){
    a=x;
    b=x;
}
marks::marks(int x, int y){
    a=x;
    b=y;
}
marks::marks(int x, int y, int z){
    a=x;
    b=y;
    c=z;
}
void marks::display(){
    cout<<"value of a is"<<a<<endl;
    cout<<"value of b is"<<b<<endl;
    cout<<"value of c is "<<c<<endl;
}
int main(){
    marks rishi;
    marks nishant(78);
    marks sid(12, 13);
    marks ritik(89, 98, 78);

    rishi.display();
    nishant.display();
    sid.display();
    ritik.display();

    return 0;
}