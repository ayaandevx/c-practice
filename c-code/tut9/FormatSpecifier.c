#include<stdio.h>
#define PI 3.14
/*  
   There are two types for constant - the value that cannot be changed
    1.> predefine - as above example
    2.> declaring const to the variable 
*/

int main(){
    // Code ...
    int a = 45;
    const float b = 7.89; // const - the value that cannot be changed
    
    printf("The value of a is %d \n&\nThe value of b is %f\n",a,b);
    printf(" %15.8f",b);
    printf("\nThe value of PI %.2f\n",PI);

    // Escape Sequence Characters
        printf("ESCAPE SEQUENCE CHARACTERS IN C\n");
       printf("\\n for new line\n");
       printf("\\a\a for Alarm of Beep\n");
       printf("\\b of backspace\n");
       printf("\\f for Form Feed \n");
       printf("\\r Carriage Return\n");
       printf("\\t for tab(HORIZONTAL)\n");
       printf("\\v for vertical tab\n");
       printf("\\ Backslash\n");
       printf("\\\" for double quote\n");
       printf("\\\' for single quote\n");
       printf("\\? for Question Mark\n");
       printf("\\nnn octal number\n");
       printf("\\xhh hexadecimal number\n");
       printf("\\\0 for null");

    return 0;
}