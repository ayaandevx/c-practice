/*
 Take input from the user and ask user to to 
 choose 0 for triangle star and 1 to reverse triangle star

 then take input from the user for star range index

 *
 **
 ***
 **** Triangular star pattern

 **** Reverse Triangular star pattern
 ***
 **
 *
*/
#include<stdio.h>
int main()
{
    /* code */
    int star_ptrn;
    printf("Enter \n0> Triangular star pattern\n1> Reverse Triangular star pattern\n:- ");
    scanf("%d",&star_ptrn);
    

   if(star_ptrn==0)
   {
            int input;
            printf("Enter number to print star range:- ");
            scanf("%d",&input);

        for(int i=0; i<=input;i++)
        {
            for(int j=0; j<=i; j++)
            {
            printf("%c",'*');
            }
            printf("\n");
        }
   }
  
   else if(star_ptrn==1)
   {
             int input;
            printf("Enter number to print star range:- ");
            scanf("%d",&input);

        for(int i=input; i>=0;i--)
        {
            for(int j=i; j>=0; j--)
            {
            printf("%c",'*');
            }
            printf("\n");
        }
   }
  else{
    printf("Enter 0 or 1");
  }

    return 0;
}
