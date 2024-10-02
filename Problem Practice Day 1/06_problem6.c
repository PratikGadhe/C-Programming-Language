// Write a program to print area of a circle. A(circle)= 3.142 * R * R in C language

#include <stdio.h>
int main(){
    float radius;
    printf("Enter radius of a circle:");
    scanf("%f",&radius);
    float a=(3.142*radius*radius);
    printf("The Area of a Circle is %f",a);
    return 0;
}