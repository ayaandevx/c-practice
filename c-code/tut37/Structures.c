#include<stdio.h>
#include<string.h>
    // IMPORTANT

struct Student
{
    int  id;
    int  marks;
    char fav_char;
    char name[34]; 
}harry,ravi,shubham;    

void print()
{
  printf("\n%s\n",harry.name);
}

int main()
{
      harry.id = 1;
      harry.marks = 456;
      harry.fav_char= 'h';
      strcpy(harry.name,"Harry Potter Student of the Year");
      
     ravi.id = 2;
     ravi.marks = 590;
     ravi.fav_char= 'r';
  
  
      shubham.id = 3;
      shubham.marks = 399;
      shubham.fav_char= 's';
   

   

   

   printf("The marks of harry is %d",harry.marks);
   printf(" harry's name is : %s",harry.name);
   
   print();

    return 0;
}