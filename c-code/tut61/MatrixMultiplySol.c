#include<stdio.h>

int main()
{
    int m , n, sum=0;
    int a[3][4] , b[4][2] , result[3][2];
    printf("Enter the matrix Table A\n");

    // Taking user input of a matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            // printf("Enter the %d %d element of matrix\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }

 printf("Enter the matrix Table B\n");
     // Taking user input of b matrix
    for(int k=0; k<3; k++)
    {
        for(int l=0; l<4; l++)
        {
            // printf("Enter the %d %d element of matrix\n",k,l);
            scanf("%d",&b[k][l]);
        }
    }


    printf("Result\n");
     // Calculating the RESULT
    for(int m=0; m<3; m++)
    {
        for(int n=0; n<2; n++)
        {
           
           //Calculate the result
           for(int o=0; o<4; o++)
           {
               sum+= a[m][o] * b[o][n];
           }
           result[m][n] = sum;
           sum=0;
        }
    }
    // Printing the RESULT
   
    for(int p=0; p<3; p++)
    {
        for(int q=0; q<2; q++)
        {
            printf("%d \t",result[p][q]);
            
        }
        printf("\n");
    }
    return 0;
}