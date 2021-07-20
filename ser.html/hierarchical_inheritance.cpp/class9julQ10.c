// 6. Program to Calculate Difference between Two Time Periods.
#include <stdio.h>
typedef struct time
{
    unsigned int hr;
    unsigned int min;
    unsigned int sec; 
}t;
void difference (t t1, t t2)
{
    t diff;
    diff.hr=t1.hr-t2.hr;
    diff.min=t1.min-t2.min;
    diff.sec=t1.sec-t2.sec;
    printf("Difference is = %dhr:%dmin:%dsec\n",diff.hr,diff.min,diff.sec);
}
int main ()
{
    t t1,t2;
    printf("Enter the First time in the form of hr:min:sec \n ");
    scanf("%u %u %u",&t1.hr,&t1.min,&t1.sec);
    printf("Enter the second time in the form of hr:min:sec\n ");
    scanf("%u %u %u",&t2.hr,&t2.min,&t2.sec);
    printf("According to the given data,\n");
    difference(t1,t2);
    return 0;
}