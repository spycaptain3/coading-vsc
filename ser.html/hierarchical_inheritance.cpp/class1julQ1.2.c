#include <stdio.h>
#include<string.h>
void dispay_Cities(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
};
int main()
{
    int n = 5;
    char str[50];
    while (n--)
    {
        scanf("%s", &str);
        int length = strlen(str);
        dispay_Cities(str, length);
    }
    return 0;
}