//w.a.pto find whether a student pass a exam or not
#include <stdio.h>
int main(){
    float p,c,m;
    printf("Enter Marks of physic : ");
    scanf("%f",&p);
    printf("Enter Marks of chemistry : ");
    scanf("%f",&c);
    printf("Enter marks of maths : ");
    scanf("%f",&m);
    float avg;
    avg=(p+c+m)/3;
    if(avg>=40){
        printf("you passed the exam!!");
    }
    else{
        printf("Better luck next time ");
    }
    return 0;
}