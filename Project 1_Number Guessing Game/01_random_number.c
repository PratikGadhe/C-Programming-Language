// how to generate random number 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    //seed random number generator
    srand(time(0));
    // rand()%100 generate a numberfrom 0 to 99 and adding 1 shift its to the range of 1 to 100
    int random_number=(rand()%100)+1;
    printf("Random number is %d",random_number);
    return 0;
}