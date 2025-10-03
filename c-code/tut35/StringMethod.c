#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "ayaan";
    char s2[] = "Shaikh";
    char s3[50];
    // This will concatinate two string
    // puts(strcat(s1,s2));

    // This will print length of string array
    // printf("The length of s1 is %d\n",strlen(s1));
    // printf("The length of s1 is %d\n",strlen(s2));

    // This will reverse given string array
    // printf("The reversed string s1 is : ");
    // puts(strrev(s1));

    // This will copy given string array
    // strcpy(s3,strcat(s1,s2));
    // puts(s3);

    // This will print ascii values 
    // printf("The strcmp for s1,s2 returned %d",strcmp(s1,s2));





 // string array of 100size
   char str1[20];
   char str2[20];
   
 // fgets method allows user to input string in array and it will store given value 
  printf("Enter Your Name :");
  fgets(str1,10,stdin);

  printf("Enter Your Friend Name:");
  fgets(str2,10,stdin);
  
  printf("> %s and %s are Best Friends",str1,str2);


    return 0;
}