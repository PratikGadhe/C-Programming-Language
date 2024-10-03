// Write a program to accept two number and print largest among them in C language

#include <stdio.h>
int main (){
    int a,b;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    if(a>b){
        printf("The Largest Number is %d",a);
    }
    else{
        printf("The Largest Number is %d",b);
    }
    return 0;
}