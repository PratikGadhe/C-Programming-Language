// Write a program to accept a number from user and print it’s square & cube in C language
#include <stdio.h>
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    int sqaure=(a*a);
    int cube=(a*a*a);
    printf("Square of a Number:%d\n",sqaure);
    printf("cube of a Number:%d",cube);
    return 0;
}