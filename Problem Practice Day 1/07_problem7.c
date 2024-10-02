// Write a program to print area of a triangle A(Triangle)= 0.5 * B * H in C language
#include <stdio.h>
int main(){
    float b,h;
    printf("Enter Breadth:");
    scanf("%f",&b);
    printf("Enter Height:");
    scanf("%f",&h);
    float area=(0.5*b*h);
    printf("Area of Triangle %f",area);
    return 0;
}