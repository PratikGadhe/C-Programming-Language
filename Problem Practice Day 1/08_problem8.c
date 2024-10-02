// Write a program to print simple interest SI = (PNR)/100 in C language

#include <stdio.h>
int main(){
    int p,n,r;
    printf("Enter Pinciple Amount :");
    scanf("%d",&p);
    printf("Enter time :");
    scanf("%d",&n);
    printf("Enter rate of interest:");
    scanf("%d",&r);
    int si=(p*n*r)/100;
    printf("Simple interest :%d",si);
    return 0;
}