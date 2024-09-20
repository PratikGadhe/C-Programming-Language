//w.a.p to print multiplication table of n number 

#include<stdio.h>

int main()
{
    int n,a=1 ;
    printf("Enter A table :");
    scanf("%d",&n);
    while(a<11){
        printf("%d × %d = %d\n",n,a,n*a);
        a++;
    }
    return 0;
}