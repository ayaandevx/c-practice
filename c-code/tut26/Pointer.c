#include<stdio.h>

int main()
{
    int a = 76;
    int* ptra = &a;
    printf("The address of pointer to a is %p\n",&ptra); 
    printf("The address of a is %p\n",&a); 
    printf("The address of a is %p\n",ptra); 
    printf("The value of a is %d\n",*ptra); 
    printf("The value of a is %d\n",a); 


    int* prt2 = NULL;
    printf("The address of some garbage %p\n",prt2);

    return 0;
}