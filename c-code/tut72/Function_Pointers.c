#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello World my user good morning\n");
}
int main()
{
    
    printf("The sum of 1 & 2 is %d\n",sum(1,2));//Testing the Function
    int (*fptr) (int,int); // Declaring a function pointer
    fptr = &sum; // Creating a function pointer
    int d = (*fptr)(4,6); // Dereferencing a function pointer
    printf("The value of d is %d\n",d);
    return 0;
}