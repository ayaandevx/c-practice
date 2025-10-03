#include<stdio.h>
void changeNumber(int* addr);

int main()
{
    //Code
    int a=67,b=89;
   // Using simple print 
   printf("The value of a is %d\n",a);

    
   changeNumber(&a);
   // Using callbyReferrence 
   printf("The value of a is now %d\n",a);

 return 0;
}

void changeNumber(int* addr)
{
 *addr = 456;
}