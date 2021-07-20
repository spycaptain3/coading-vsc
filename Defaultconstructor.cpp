#include<iostream>
using namespace std;


class test
{
  int a, b;
  public:
  test()
  {
      a=87;
      b=34;
  }
  void display (void)
  {
      cout<<"Value of  a is : "<<a<<endl;
      cout<<"value of b is : "<<b<<endl;

  }
  int sum(void)
  {
      cout<<"Sum of a and b is :"<<a+b<<endl;
      return a+b;

  }
};
int main(){
    test t, t1;
    t.display();
    t.sum();


    return 0;
}