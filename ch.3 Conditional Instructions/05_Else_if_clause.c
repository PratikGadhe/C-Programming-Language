// How else if statement works 

/* in simple way else if statement is basically used at that time
 when there is multiple conditions given and all conditions are true
 and all conditions have to be used in 'if' statement 
 because 'if' statement is always gives true value*/
 
#include <stdio.h>
int main(){
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if(age>60){
    printf("You Can Drive and youre senior citizen");
    }
    else if(age>18){
    printf("You Can Drive ");
    }
    else{
    printf("You are not eligible to drive");
    }
    return 0;
}    
    