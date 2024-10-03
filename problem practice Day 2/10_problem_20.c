// Write a program to accept two numbers from user and compare them in C language

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is lesser than %d",a,b);
    }
    return 0;
}