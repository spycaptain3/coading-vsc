//4.	Program to add two distances (feet-inch)

#include<stdio.h>
struct distance
{
    int feet;
    int inch;
}chair={7,5},total;
int main()
{   
    printf("size of chair is %d feet %d inch\n",chair.feet, chair.inch);
    printf("size of chair in inch is: \n");
    total.inch=chair.inch + (chair.feet*12);
    printf("%d inch",total.inch);
    return 0;
}