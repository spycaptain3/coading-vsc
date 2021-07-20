#include<iostream>
using namespace std;

union pen
{
    int subham;
    char subham_fav;
    float subham_pen_weight;
};
int main(){
    union pen p1;

    p1.subham_fav ='L';

    cout<<"fav pen of shubham is "<<p1.subham_fav;
    return 0;
}
