#include<stdio.h>
int main(){
    char a,e,i,o,u, c;
    printf("Enter a charater: ");
    scanf("%c",&c);

    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("It is vowel\n");
    }
    else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            printf("It is constant");
        }
        else{printf("It is constant");}

    return (0);
}