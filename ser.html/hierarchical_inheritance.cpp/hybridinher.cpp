#include<iostream>
using namespace std;
class student{
    int roll;
    public:
    void getroll (int x){
        roll=x;
    }
    void putroll(void){
        cout<<"In roll number "<<roll<<endl;
    }
};
class test: public student{
   protected:
   float t1, t2;
   public:
   void getmarks (float x,float y){
       t1=x;
       t2=y;
   }
   void putmarks (){
       cout<<"Marks obtained"<<endl;
       cout<<"Marks in test 1 is: "<<t1<<endl;
       cout<<"Marks in test 2 is: "<<t2<<endl; 
   }
};
class sports{
    protected:
    float sp;
    public:
    void getsp(float x){
        sp= x;
    }
    void putsp(){
        cout<<"Sports score is:"<<sp<<endl;
    }
};
class result:public test, public sports{
     float total;
     public:
     void disp();
};
void result :: disp(){
    total =t1+t2+sp;
    putroll();
    putmarks();
    putsp();
    cout<<"Total score is:"<<total<<endl;
}
 int main(){
     result rishi;
     rishi.getroll(101);
     rishi.getmarks(80.5, 82.9);
     rishi.getsp(9.5);
     rishi.disp();

     return 0;
 }