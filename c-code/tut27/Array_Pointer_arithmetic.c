#include<stdio.h>

/*

In C, the pointer is a variable used for storing the address of a variable. 
The variable can be of any type such as 
int, char, array, etc. 
The pointer size depends on the computer architecture, however, 
for a 32-bit system, the pointer used is 2 bytes.

*/

int main()
{
   
 /* char a = '3';
    char* ptra = &a;
    
    printf("%d\n",ptra);
    printf("%d\n",ptra+2);
  
 int bs = 45;
 int* ptraC = &bs;
printf("\n %d \n",*ptraC);

*/

    int arr[] = {0,1,2,3,4,5,6,7};
    printf("Value at position 3 of the array is %d\n",arr[1]); 
    printf("%d",&arr[1]);

   printf("The value at address of first element of the array is %d \n", *(&arr[0]));
   printf("The value at address of first element of the array is %d \n", *(arr));
   printf("The value at address of Second element of the array is %d \n", *(&arr[1]));
   printf("The value at address of Second element of the array is %d \n", *(arr + 1));


    return 0;
}