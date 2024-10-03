// Write a program to accept a number and print if the number is Positive/Negative in C language

#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("The Number %d is Positive",a);
    }
    if(a==0){
        printf("The Number %d is Neither Positive Nor Negative",a);
    }
    else{
        printf("The Number %d is negative",a);
    }
    return 0;
}