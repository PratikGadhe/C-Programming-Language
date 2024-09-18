// how increment works
#include<stdio.h>

int main()
{
    int i=5;
    printf("the value of i is %d\n",i); //5
    i=i+5;
    printf("the value of i is %d\n",i); //10
    //i++ if we write i++ here then c will read it and print +1 in 10
    
    printf("the value of i is %d\n",i++);//10
    //but if we write i++ here then there is no next line so the value remain as it is
    printf("the value of i is %d\n",++i);
    return 0;
}