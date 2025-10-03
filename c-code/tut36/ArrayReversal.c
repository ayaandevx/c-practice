#include<stdio.h>

void revArray(int arr[])
{
    int temp;
    for(int i=0; i<7/2; i++)
    {
     temp = arr[i];
    arr[i] = arr[6-i];
    arr[6-i] = temp;

          
    }
    

}
void printArr(int arr[])
{
   for(int i=0; i<7; i++)
   {
    printf("The value of element %d is %d\n",i,arr[i]);
   }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    printf("Array before reversal :\n");
    printArr(arr);
    printf("\nArray after reversal:\n");
    revArray(arr);
    printArr(arr);
    


    return 0;
}