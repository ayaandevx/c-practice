#include<stdio.h>
//1
int sum(int a, int b);
//2
void printstar(int n);
//3
int takenumber();
// 4
void wth_arg_ret();

int main()
{
    //1
    int sum_var;
    sum_var = sum(45,66);
    printf("%d\n",sum_var);

    //2
    printstar(5);

    //3
   int c;
   c= takenumber();
   printf("The Number Entered is %d \n",c);

   //4
  wth_arg_ret();

    return 0;
}

//1 -- with argument & with return value
int sum(int a, int b)
{
  return a+b;
}

//2 -- with argument & without return value
void printstar(int n)
{
    for(int i=0; i<n; i++){
        printf("%c\n",'*');
    }
}

//3 -- without argument & with return value
int takenumber()
{
    int i;
    printf("Enter a number:- ");
    scanf("%d",&i);
    return i;
}

//4 -- without argument & without return value
void wth_arg_ret()
{
    printf("> This Line -- is \nwithout argument \n--&\nwithout return value ");
} 