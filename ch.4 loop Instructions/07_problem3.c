//wap to print first natural number usinf for loop
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Natural Number is %d\n",i);
    }
    printf("Hello world!");
    return 0;
}