// Write a program to accept a number from user and print if it is divisible by 5 in C language

#include <stdio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a%5==0){
        printf("Given Number %d is devisible by 5",a);
    }
    else{
        printf("Given Number %d is not devisible by 5",a);
    }
    return 0;
}