//W.a.p to print sum of first ten natural number using while loop 
#include<stdio.h>

int main()
{
    int i=1,sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("the sum of first 10 number is %d",sum);
    return 0;
}