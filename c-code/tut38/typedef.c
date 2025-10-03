#include<stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;
int main()
{
    // typedef <previous_name> <alias_name>
    /*
      typedef unsigned long ul;
      typedef int integer;
      ul l1,l2,l3;
      integer a = 4;
      printf("value of a is %d",a);
    */

    
    std s1,s2;
     s1.id = 56;
     s2.id = 89;

    // printf("The value of s1's id is %d\n",s1.id);
    // printf("The value of s2's id is %d\n",s2.id);


    // int *a,b;
    typedef int* intPointer;
    intPointer a,b;
    int c = 89;
    a =&c;  
    b =&c;



    return 0;
}