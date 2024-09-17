// w.a.p to find the users grade 
#include <stdio.h>
int main(){
    int marks;
    printf("ENTER YOUR MARKS: ");
    scanf("%d",&marks);
    if(marks>90 && marks<100){
        printf("your grade is A+ %d"); 
    }
    else if(marks>80 && marks<90){
        printf("Your Grade is A %d");
    }
    else if(marks>70 && marks<80){
        printf("Your Grade is b %d");
    }
    else if(marks>60 && marks<70){
        printf("Your Grade is c %d");
    }
    else{
        printf("your marks is less than 60 %d");
    }
    return 0;
}