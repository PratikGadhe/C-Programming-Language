//w.a.p to print multiplication table of n number in reverse order

#include<stdio.h>

int main()
{
    int n,a=10;
    printf("Enter A table : ");
    scanf("%d",&n);
    do{
        printf("%d × %d = %d\n",n,a,n*a);
        a--;
    }
    while(a>0);
    return 0;
}