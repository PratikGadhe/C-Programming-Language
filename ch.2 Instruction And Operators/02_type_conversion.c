/*  int and int gives int
    int and float gives float 
    float and float gives float
*/

#include <stdio.h>
int main(){
    int a=9;
    int b=2;
    float c=a/b;//it is float but still the output given is 4.0 not 4.5 because bith a and b is integer
    printf("%f",c);
    return 0;
}