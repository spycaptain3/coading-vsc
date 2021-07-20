#include<iostream>
using namespace std;
class result{
    int ma,mb,mc,md,me, per;
    public:
     result (int a, int b, int c, int d, int e){
        ma=a;
        mb=b;
        mc=c;
        md=d;
        me=e;
    }
    int percent();
};
int result::percent(){
     per=((ma+mb+mc+md+me)/500)*100;
     cout<<per<<endl;
     return per;
     
}
int main(){
     result m1(89, 23,87,45,32);
    cout<<"percentage of subham in 10th is: ";
    m1.percent();
    result m2(47,87,98,23,55);
    cout<<"percentage of gyan is : ";
    m2.percent();

    return 0;
}