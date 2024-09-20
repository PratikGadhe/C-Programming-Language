//w.a.p to find whether user Enter prime number or not using while loop

#include<stdio.h>

int main()
{
    int n,prime=1;
    int i=2;
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            prime=0;
            break;
        }
        
        if(prime){
            printf("%d is not a prime number",n);
        }
        else{
            printf("%d is a prime number",n);
           
        }
        i++;
    }
    return 0;
}