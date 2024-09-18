//w.a.p to print natural number from 10 to 20 taking initial variable 0

#include <stdio.h>
int main(){
    int i=0;
    while(i<21){
        if(i>=10){
        printf("The natural number is %d\n",i);
        }
        i=i+1;
    }
    return 0;
}