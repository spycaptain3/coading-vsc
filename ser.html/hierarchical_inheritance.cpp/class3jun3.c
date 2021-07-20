#include<stdio.h>
int main(){
    float bs , hra, da, gs;
    scanf("%f", &bs);
    if (bs<1000){
        hra=(10*bs)/100;
        da= (90*bs)/100;
        }
    else{
        hra=500;
        da=(98*bs)/100;
    }
    gs= bs+ hra + da;
        printf("gs is:  %f",gs);
    return (0);
}