//Find the maximum /minimum value in an array.
#include <stdio.h>
int main()
{
    int a[10],i,siz,min,max;
   
    printf("Enter size of the array : ");
    scanf("%d",&siz);
 
    printf("Enter elements in the array : ");
    for(i=0; i<siz; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<siz; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum = %d\n",min);
     printf("maximum = %d",max);
 
 
    return 0;
}