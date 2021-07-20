//3.Program we have the name of 5 cities saved in an array cities of type char. We will be using the displayCities function to print the names.
#include<stdio.h>
#include<string.h>
void display(void);
char cities[5][15];
int main()
{
   
    printf("Enter the name of 5 cities: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%s \n",&cities[i][0]);
    }
    display();
    return 0;
}
 void display ()
 {   
    printf("Entered cities name are: \n");
    for(int i=0;i<5;i++)
    {
        printf("%s \n",cities[i]);
    }
 }
  

