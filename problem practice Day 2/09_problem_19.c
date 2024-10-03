// Write a program to accept a number from user and print if it is multiple of 7 in C language

#include <stdio.h>
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a%7==0){
        printf("Given Number %d is multiple of 7",a);
    }
    else{
        printf("Given Number %d is not multiple of 7",a);
    }
    return 0;
}