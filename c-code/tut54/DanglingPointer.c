#include <stdio.h>
#include <stdlib.h>

/*
int* functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    
    return &sum;
}
*/
int main()
{
    /* code */
    //CASE 1 : De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 56;
    ptr[2] = 67;
    ptr[3] = 95;
    free(ptr); // ptr is now a dangling pointer

 
    //CASE 2: Function returning local variable address
    // dangPtr is now a a dangling pointer
    // int * dangPtr = functionDangling(); 


    //CASE 3: If a variable goes out of scope 
      int * dangptr3;
      {
          int d = 45;
          dangptr3 = &d;
      }
        // Here variable d goes out of the scope which means dangptr3 is pointing to a
        // location which is freed and hence dangptr3 is now a dangling pointer

    return 0;
}
