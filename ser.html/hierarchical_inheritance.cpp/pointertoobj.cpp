#include<iostream>
#include<string.h>
using namespace std;

class students
{
    int roll;
    char name[10];
    public:
    void getdata (int x, char *y)
    {
        roll=x;
        strcpy(name,y);
    }
    void putdata()
    {
        cout<<"student name"<<name<<endl;
        cout<<"student roll number"<<roll<<endl;
    }
};
int main()
{
    students obj;
    students *p;
    p= &obj;
    
    *p.getdata(101, " ravi");khih';
    
    p->putdata();
    
    return 0;
}