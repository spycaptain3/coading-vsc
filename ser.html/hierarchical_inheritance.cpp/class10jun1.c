#include<stdio.h>
int main(){
int id, pass;
 
printf("enter your id:");
scanf("%d",&id);
switch(id)
{
    case(20):
    printf("Enter your password");
    scanf("%d",&pass);
    switch(pass)
    {
    case(000):
    printf("Welcome to prog world");
    break;
    default:
    printf("Incorrect password");
    
    }
    break;
    default:
    printf("inccorect id");
    
}



    return(0);
}