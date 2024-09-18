//w.a.p to print first n natural number with the help of do while loop
#include<stdio.h>

int main()
{
    int a=1,i;
    printf("Enter a number : ");
    scanf("%d",&i);
    do{
        printf("Natural Number %d\n",a);
        a++;
    } while(a<=i);
    
    return 0;
}