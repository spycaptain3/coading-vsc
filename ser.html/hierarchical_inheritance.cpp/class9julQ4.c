//1.	Input two structure’s data and display the same.

#include<stdio.h>
struct car 
{
    int hight;
    char color;
};
int main()
{
    struct car maruti={65, 'B'};
    struct car hundai={88,'R'};

    printf("hight of the maruti car is %d\n",maruti.hight);
    printf("color of the maruti car is %c\n",maruti.color);
    printf("hight of the hundai car is %d\n",hundai.hight);
    printf("color of the hundai car is %c\n",hundai.color);
    return 0;
}