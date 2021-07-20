#include<stdio.h>
int main(){
    int x=1, y=2, z=3, w;
    printf("1) : %d", x++ + ++y - --z);
    printf("\n");

     x=1, y=2, z=3;
    printf("2): %d", --x - y-- + z++);
     printf("\n");

  x=1, y=2, z=3;
    printf("3): %d", x++ * ++y % ++z);
     printf("\n");

  x=1, y=2, z=3;
    printf("4): %d", --x / --y * --z);
printf("\n");

  x=1, y=2, z=3;
    printf("5): %d", --x - z-- % --y);
     printf("\n");

       x=1, y=2, z=3;
printf("6): %d", (--x - --y - --z));
     printf("\n");

       x=1, y=2, z=3;
printf("7): %d", (++x * y-- - ++y * x--));
     printf("\n");

     x=10, y=11, z=12;
      w= ++x - y++;
     printf("8): w= %d, x= %d, y= %d, z=%d", w, x, y,z);
     printf("\n");

     x=10, y=11, z=12;
     w= ++y + x++ *z--;
     printf("9):w= %d,x= %d, y= %d, z=%d",w, x,y,z);
     printf("\n");
     
     x=10, y=11, z=12;
     w= ++x % ++y % ++z;
     printf("10):w= %d, x= %d, y= %d, z=%d",w,x,y,z);
    return (0);
    
}