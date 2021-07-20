//3.	Copying one structure to another
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

    struct car tata;
    tata.hight=maruti.hight;
    struct car renult;
    renult.color=hundai.color;

    printf("hight of the maruti car is %d\n",maruti.hight);
    printf("color of the hundai car is %c\n",hundai.color);
    printf("hight of the tata car is %d\n",tata.hight);
    printf("color of the renult car is %c",renult.color);
    return 0;
}