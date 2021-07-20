
#include <stdio.h>
#include <string.h>
int count(char s[], char c)
{

    int total = 0;
 
    for (int i=0;i<50;i++)
 
       
        if (s[i] == c)
            total++;
 
    return total;
}
int main()
{
    char str[50]= "ehdisekfjejkjkejslejfske";
    char c = 'e';
    printf("%d\n",count(str, c) );
    return 0;
}