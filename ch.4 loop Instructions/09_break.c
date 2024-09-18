//how break statement works
#include<stdio.h>

int main()
{
    int i=0;
    for (i;i<15;i++){
        if(i==6){
            break;//the iteration will exit at 5 
        }
        printf("The Value is %d\n",i);
    }
    return 0;
}