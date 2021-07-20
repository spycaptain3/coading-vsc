#include <iostream>
using namespace std;
 class girlfriend
 {
     

     int bday, month, password;

     public:

     void enter(void);
     void result (void);

 };
  void girlfriend :: enter(void){
      cout<<"Enter Birthday of girlfriend: \n";
      cin>> bday;
      if(bday==01)
      {
          cout<<"Enter month of birthday;\n";
          cin>>month;
          if(month==01)
          {
              cout<<"You are correct😊";
              cout<<"Enter your password: ";
              cin>>password;
              if (password==0101)
              {
                  cout<<"You are My boyfriend😊"<<endl;
                  cout<<"Baby i missed you😔"<<endl;
                  cout<<"Your darling is only your.\n";

              }
              else{cout<<"You are her relative or normal friend\n";}

          }
          else{cout<<"You are false\n";}

      }
      else{cout<<"you are not his boyfriend.\n";}

  }

  void girlfriend:: result(void)
  {
      cout<<"I am a lonely girl\n";
      cout<<" my life is only my boyfriend\n";
      cout<<"Miss you babuuuu😘";
  }

  int main(){
      cout<<"Are you my boyfriend or Not\n";
      cout<<"Searching for my life my boyfriend🙃\n";

      girlfriend obj;
      obj.enter();
      obj.result();
      cout<<"\nThank you";

      return 0;
  }