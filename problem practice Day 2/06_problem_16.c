// Write a program to accept a number and check if it is >10, <10 or =10 in C language

#include <stdio.h>
int main(){
    int a;
    printf("Enter Number :");
    scanf("%d",&a);
    if(a>10){
        printf("The Number %d is greater than 10",a);
    }
    else if(a<10){
        printf("The Number %d is lesser than 10",a);
    }
    else{
        printf("The Number %d is equals to 10",a);
    }
    return 0;
}