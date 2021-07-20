#include <iostream>
#include <string>
using namespace std;

class student
{
    int age, standard;
    string first_name;
    string last_name;
    
    public:
     void get_age(){
         cout<<"Enter Age:" <<endl;
         cin>>age;
     }
     void set_age(){
         cout<<age<<endl;
     }
     void get_first_name(){
         cout<<"enter your first name: "<<endl;
         getline(cin, first_name);
     }
     void set_first_name(){
         cout<<"first name is:"<<endl;
         cout<<first_name;
     }
     void get_last_name(){
         cout<<"enter your last name:"<<endl;
         getline(cin, last_name);
     }
     void set_last_name(){
         cout<<"your last name is:"<<endl;
         cout<<last_name<<endl;
     }
     void get_standard(){
         cout<<"Enter your standard:"<<endl;
         cin>>standard;
     }
     void set_standard(){
         cout<<"your standard is: "<<endl;
         cout<<standard<<endl;
     }

};
int main(){
    student s;
    
    s.get_age();
    s.get_first_name();
    s.get_last_name();
    s.get_standard();
    
    s.set_age();
    s.set_last_name();
    s.set_first_name();
    s.set_standard();
    
    return 0;
    
}

