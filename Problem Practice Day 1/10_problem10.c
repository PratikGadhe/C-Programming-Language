// Write a program to accept two values a & b and interchange their values in C language

#include <stdio.h>
int main(){
    int a,b,temp; //let suppose a=4,b=5,temp=0
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Before Swapping a=%d and b=%d\n",a,b);
    temp=a; //temp=4
    a=b;  //a=5 because b is 5
    b=temp; //b=4 because temp is 4 coz of a
    printf("After swapping a=%d and b=%d",a,b);
    return 0;
}