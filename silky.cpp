#include <iostream>
using namespace std;
 class silky
 {
     int bday, month, password;

     public:

     void enter(void);
     void result (void);

 };
  void silky :: enter(void){
      cout<<"Enter Birthday of silky: \n";
      cin>> bday;
      if(bday==04)
      {
          cout<<"Enter month of birthday;\n";
          cin>>month;
          if(month==12)
          {
              cout<<"You are correct😊";
              cout<<"Enter your password: ";
              cin>>password;
              if (password==1104)
              {
                  cout<<"You are Deepak Gupta😊"<<endl;
                  cout<<"Deepak i missed you😔"<<endl;
                  cout<<"Your Silky is only your and your Silky is safe Deepak\n";

              }
              else{cout<<"You are silky's relative or normal friend\n";}

          }
          else{cout<<"You are false\n";}

      }
      else{cout<<"you are not his boyfriend.\n";}

  }

  void silky:: result(void)
  {
      cout<<"I am silky\n";
      cout<<" my life is Deepak\n";
      cout<<"Not Byee only tc😊(take care)";
  }

  int main(){
      cout<<"Are you Deepak or Not\n";
      cout<<"Searching for Sily husband Deepak Gupta🙃\n";

      silky obj;
      obj.enter();
      obj.result();
      cout<<"\nThank you";

      return 0;
  }