#include<stdio.h>

int main()
{
  FILE *ptr = NULL;
  char string[34]="This is a file";

//  *****Reading a File*****
//   ptr = fopen("myFile.txt","r");
//   fscanf(ptr,"%s",string);
//   printf("The content of this file has %s\n",string);

//  *****Writing a File*****
//  ptr = fopen("myFile.txt","w");
// fprintf(ptr,"%s",string);

//  *****append a File*****
  ptr = fopen("myFile.txt","a");
  fprintf(ptr,"%s",string);

return 0;
}