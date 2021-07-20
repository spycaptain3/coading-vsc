#include <iostream>
using namespace std;

void swap (int & , int &);

int main()
{
    int a, b;
    cout<<"Enter the First Element: "<<endl;
    cin>>a;
    cout<<"Enter the second Element: "<<endl;
    cin>>b;

    cout<<"value of a before swaping is: "<<a<< endl;
    cout<<"value of b before swaping is: "<<b<< endl;

    swap(a,b);

    cout<<"Value of a after swaping is: "<<a<<endl;
    cout<<"Value of b after swaping is: "<<b<<endl;

    return 0;
}

    void swap(int & x, int & y)
    {
        int temp;
        
        temp=x;
        x=y;
        y=temp;
    }


