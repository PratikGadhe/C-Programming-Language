//W.a.p to print sum of first ten natural number using for loop

#include<stdio.h>

int main()
{
    int i=1,sum=0;
    for(i;(i<=10);i++){
    sum+=i;
    }
    printf("Sum of ten natural number is %d",sum);
    return 0;
}