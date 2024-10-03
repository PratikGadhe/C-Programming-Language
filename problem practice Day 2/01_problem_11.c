/*Write a program to accept roll no and marks of 3 subjects of a student,
  Calculate total of 3 subjects and average in C language*/

#include <stdio.h>
int main(){
    int r;
    float p,c,m;
    printf("Enter Roll NO. :");
    scanf("%d",&r);
    printf("Marks Obtained In Physics:");
    scanf("%f",&p);
    printf("Marks Obtained In Chemistry:");
    scanf("%f",&c);
    printf("Marks Obtained In Maths:");
    scanf("%f",&m);
    float total;
    total=p+c+m;
    float avg;
    avg=(total)/3;
    printf("Total Marks Obtained :%f\n",total);
    printf("Average of total marks is %f",avg);
    return 0;
}