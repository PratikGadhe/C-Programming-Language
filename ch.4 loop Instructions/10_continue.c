//how continue statement works
#include<stdio.h>

int main()
{
    int i=0;
    for (i;i<15;i++){
        if(i==6){
            continue;//the iteration will skip 6 and continue to the next one
        }
        printf("The Value is %d\n",i);
    }
    return 0;
}