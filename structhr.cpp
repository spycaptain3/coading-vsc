#include<iostream>
using namespace std;
int a, d;
    char fir[50];
    char las[50];

struct student
{
    int age;
    char first_name;
    char last_name;
    int standard;
};
int main(){
    
    struct student s;
    s.age=5;
    s.first_name=6;
    s.last_name;
    s.standard;
    
     cin>>a;
    cin.get(fir,50);
    cin.get(las,50);
    cin>>b;

    cout<<s.age<<" "<<s.first_name<<" "<<s.last_name<<" "<<s.standard;
    
    return 0;
}