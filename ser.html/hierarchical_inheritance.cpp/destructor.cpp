#include<iostream>
using namespace std;

 class student
 {
     static int count;
     public:
     student(){
         count++;
         cout<<"roll number "<<count<<"is present"<<endl;
     }
     ~student(){
         cout<<"roll number "<<count<<"completed and removed"<<endl;
         count--;
     }
 };
 int main(){
     cout<<"Assignment checking "<<endl;
     student ritik;
     {
         cout<<"team of ritik"<<endl;
         student Deepak, Avinav;
         cout<<"Team of Ritik are roll 2 Deepak and roll 3  Avinav"<<endl;
     }
     cout<<"team of ritik completed and ritik roll number is 1 and"<<endl;
     return 0;
 }
 
//  Assignment checking
// roll number 1 is present
// team of ritik 
// roll number 2 is present 
// roll number 3 is present 
// Team of Ritik are roll 2 Deepak and roll 3  Avinav
// roll number 3 completed and removed
// roll number 2 completed and removed
// team of ritik completed and ritik roll number is 1 and
// roll number 1 completed and removed