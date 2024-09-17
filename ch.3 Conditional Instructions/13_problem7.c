//w.a.p to greatest of 4 entered by user
#include <stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter a number 1:");
    scanf("%f",&a);
    printf("Enter a number 2:");
    scanf("%f",&b);
    printf("Enter a number 3:");
    scanf("%f",&c);
    printf("Enter a number 4:");
    scanf("%f",&d);
    if(a>b && a>c && a>d){
        printf("the greatest number is %f",a);
    }
    else if(b>a && b>c && b>d){
        printf("the greatest number is %f",b);
    }
    else if(c>a && c>b && c>d){
        printf("the greatest number is %f",c);
    }
    else{
        printf("the greatest number is %f",d);
    }
    return 0;
}