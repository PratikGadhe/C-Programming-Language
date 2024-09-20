//W.a.p to print sum of first ten natural number using do-while loop

#include<stdio.h>

int main()
{
    int i=1,sum=0;
    do{
        
        sum+=i;
        i++;
    }while(i<=10);
    printf("The sum of ten natural number is %d",sum);
    return 0;
}