//2.	Declaration and initialization simultaneously of structures

#include<stdio.h>
struct car 
{
    int hight;
    char color;
}maruti={65,'B'}, hundai={88,'R'};
int main()
{
    printf("hight of the maruti car is %d\n",maruti.hight);
    printf("color of the maruti car is %c\n",maruti.color);
    printf("hight of the hundai car is %d\n",hundai.hight);
    printf("color of the hundai car is %c\n",hundai.color);
    return 0;
}