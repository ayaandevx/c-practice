#include<stdio.h>
int b = 345;

int ret()
{
    return 43 * 3;

}
int func1(int b1)
{
        static int myVar;
    // printf("The address of b inside func1 is %d\n",&b);
    printf("The value of b inside func1 is %d\n",myVar);

    myVar++;
    return b1 + myVar;
}
int main()
{
    // int b = 344;
    // printf("The address of b inside main is %d\n",&b);
  
    // int val = func1(b);
    // val = func1(b);
    // val = func1(b);
    // val = func1(b);
    // val = func1(b);

    // int *ptr = &val;
    // printf("The value of func1 is %d\n",val);
    return 0;
}