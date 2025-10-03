#include<stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int,int))
{
    printf("Hello User\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}

void greetGMAndExecute(int (*fptr)(int,int))
{
    printf("Hello User\n");
    printf("The sum of 5 and 5 is %d\n",fptr(5,5));
}

// -----MAIN FUNCTION------------
int main()
{
 int (*ptr)(int,int);
 ptr = sum;   
greetHelloAndExecute(ptr);

return 0;
}