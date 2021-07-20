#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *ptr;
    ptr = NULL;

    /*
     *since the ptr is NULL, 
     *it will act like malloc function
     */
    ptr = realloc(ptr,10);
    if(ptr != NULL)
           printf("Memory created successfully\n");

    return 0;
}
