#include<stdio.h>
#include<time.h>
void getseconds(unsigned long *par);
int main ()
{
    unsigned long sec;
    getseconds(&sec);
    printf("Number of seconds: %dld\n",sec);
    return 0;
}
void getseconds(unsigned long *par)
{
    *par=time(NULL);
    return;
}