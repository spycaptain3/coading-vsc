 #include<stdio.h>
 int main(){

 int a =10 ,b=9, result;
    result= ((a<12)||(b<5));
    printf("\nresult=%d",result);
     result= ((a==4)||(b==2));
    printf("\nresult=%d",result);
     result= ((a>10)||(b<10));
    printf("\nresult=%d",result);
     result= (a||b);
    printf("\nresult=%d",result);
     result= (a||12);
    printf("\nresult=%d",result);
     result= ((a==10)||(a--));
    printf("\nresult=%d",result);
    return 0;
}