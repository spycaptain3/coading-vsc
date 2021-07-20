#include<stdio.h>
int main(){
    int age=10, height =45, result;
    result =((age<12&& height<48)||(age>65&&height>72));
    printf("\n Result=%d",result);

    int year=2000;
    result =((year%4==0)&& (year%100!=0)||(year%400==0));
    printf("\n Result=%d",result);
  
   result =(25<7||15>36);
    printf("\n Result=%d",result);
    result =(15>36||3<7);
    printf("\n Result=%d",result);
    result =(14>7 && 5<=5);
    printf("\n Result=%d",result);
    result =(4>3 && 17<=7);
    printf("\n Result=%d",result);
    result =!0;
    printf("\n Result=%d",result);
    result =!(13!=7);
    printf("\n Result=%d",result);
    result =(9!=7)&&(!0);
    printf("\n Result=%d",result);
    result =(5>1)&&7;
    printf("\n Result=%d",result);
    return 0;
}