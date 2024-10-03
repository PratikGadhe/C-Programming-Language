// Write a program to accept a number from user and print if it is even or odd in C language

#include <stdio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a%2==0){
        printf("Given Number %d is Even Number",a);
    }
    else{
        printf("Given Number %d is odd Number",a);
    }
    return 0;
}