// Logical Operators 
// 1 means true and 0 means false 
#include <stdio.h>
int main(){
    int a=0,b=1;

    /* For and operator truth table is 
    1 and 1 evaluates to 1 
    1 and 0 evaluates to 0 
    0 and 0 evaluated to 0 */
    printf("the value of a and b is %d\n",a&&b);

    /* For Or operator truth table is 
    1 or 1 evaluates to 1 
    1 or 0 evaluates to 1 
    0 or 0 evaluates to 0  */

    printf("the value of a or b is %d\n",a||b);

    /* For not operator :
    not operator will convert true statement into false statement 
    and false into true statement */
    
    printf("The given statement is %d",!(a==b));
    return 0;
}    