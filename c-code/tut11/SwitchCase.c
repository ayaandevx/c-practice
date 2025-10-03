#include<stdio.h>

int main()
{
 int age;
 int marks;
    printf("Enter Your Age :-");
    scanf("%d",&age);

    printf("Enter Your Marks :-");
    scanf("%d",&marks);

 switch(age)
 {
   case 6:
     printf("Your Age is 6\n");
     switch(marks){
        case 50:
         printf("Your Marks are 50");
          break;

        case 90:
         printf("Your Marks are 90!");
          break;

        default:
         printf("Marks are Not 50 Nor 90!");
          break;  

     }
      break;
   case 7:
     printf("Your Age is 7");
      break;
   case 8:
     printf("Your Age is 8");
      break;
    default:
     printf("Your age is not between 6-8");       
      break;
 }


}