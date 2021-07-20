#include<iostream>
using namespace std;

typedef struct rashan
{
    int rice;
    int dal;
    char favchoc;
    float kaju;
}fr;
int main()
{ 
    fr subham;
    fr gyan;
    fr deepak;

    subham.rice =5;
    gyan.rice=2;
    deepak.rice=3;

    gyan.dal= 1;
    subham.dal=2;

    subham.favchoc= 'D';
    gyan.favchoc='k';
    deepak.favchoc='s';

    gyan.kaju=0.25;

    cout<<"quantity of rice for subham , Deepak, gyan in kg is \n"<<subham.rice <<"\n"<<deepak.rice<<endl<<gyan.rice<<endl;
    cout<<"quantity of dal for subham , Deepak, gyan in kg is \n"<<subham.dal<<endl<<gyan.dal<<endl;
    cout<<"quantity of kaju for subham , Deepak, gyan in kg is \n"<<gyan.kaju<<endl;
    cout<<"first name of fav choclate of subham gyan deepak is\n"<<subham.favchoc<<endl<<gyan.favchoc<<endl<<deepak.favchoc<<endl;

    return 0;
}