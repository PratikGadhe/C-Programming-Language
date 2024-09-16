//calculate simple interest
#include <stdio.h>
int main(){
    int p,r,t;//p is principal,r is rate of interest,t is time
    printf("Enter principal:");
    scanf("%d",&p);
    printf("Enter rate of interest:");
    scanf("%d",&r);
    printf("Enter time:");
    scanf("%d",&t);
    printf("Simple interest is %d",(p*r*t)/100);
    return 0;
}