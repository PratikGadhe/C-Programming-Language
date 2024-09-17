// Switch Case Concept 

#include <stdio.h>
int main(){
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);
    switch(a){
    case 1:
     printf("You Enter number 1");
     break;
    case 2:
     printf("You Enter number 2");
     break;
    case 3:
     printf("You Enter Number 3");
     break;
    default:
     printf("You enter wrong number"); 
    }
    return 0;
}    