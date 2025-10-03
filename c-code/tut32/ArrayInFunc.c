#include<stdio.h>

void func1(int array[]);
void func2(int* ptr);
void func3(int arr2d[2][2]);

int main()
{
    //Code
    int arr[] = {23,13,45,7};
      
       // PROBLEM -- 1
    // printf("The value of arr 0 is %d \n\n ",arr[0]);
    // func1(arr);
    // printf("\n\nThe value of arr 0 is %d \n ",arr[0]);

       // PROBLEM -- 2
    //   func2(arr);

       // PROBLEM --3
        int array[2][2] = {{12,19},
                        {25,38}};
        func3(array);

    return 0;
}



void func1(int array[])
 {
        
    for(int i=0; i<4; i++)
    {
        printf("The value at %d is %d\n",i,array[i]);

    //  array[0]=566; 
    // -->Very Important point that if you change any value here,
    //  it gets reflected in main 
    }

}

void func2(int* ptr)
{
for(int i=0; i<4; i++)
    {
        // printf("The value at %d is %d\n",i,ptr[i]);  OR
        printf("The value at %d is %d\n",i,*(ptr+i));

       *(ptr+2) =5645;         
    }
}

void func3(int arr[2][2])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("The value at  %d ,%d  is  %d\n",i,j,arr[i][j]);      
        }
    }
}

