//w.a.p to calculate income tax paid by employee
#include <stdio.h>
int main(){
    int i;
    printf("Enter your income amount: ");
    scanf("%d",&i);
    if(i<250000){
        printf("your income is less then 2.5lakh no need to pay tax");
    }
    else if(i>=250000 && i<500000){
        printf("your have to pay 5 percent  of your entered income ");
    }
    else if(i>=500000 && i<1000000){
        printf("your have to pay 20 percent  of your entered income ");
    }
    else if(i>=1000000){
        printf("your have to pay 30 percent  of your entered income ");
    }
    return 0;
}