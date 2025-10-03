// #include <stdio.h>


// int main()
// {
//     /* code */
//     printf("My First C Programme");

//     return 0;
// }

#include<stdio.h>
#include<string.h>

void main()
{

char str1[40];
char str2[20];
printf("Enter two strings: ");

scanf("%s%s",&str1,&str2);

strcat(str1,str2);
printf("Concatenated string is: %s",str2);

}