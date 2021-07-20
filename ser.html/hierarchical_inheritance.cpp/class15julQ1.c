#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*ptr1;
    ptr1=(int*)malloc(3*sizeof(int));
    if(ptr1==NULL)
    {
        printf("MEMORY NOT ALLOCATED\n");

    }
    else{
        printf("succesfully\n");
    }
    printf("Address of the prointer i s%u\n",ptr1);
    for(int i=0;i<3;i++)
    {
        ptr1[i]=i;
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",ptr1[i]);
    }
    return 0;
}