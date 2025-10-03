#include<stdio.h>
int factorial(int number);


int main()
{

  int fact_num;
  int sum;
  printf("Enter the number you want factorial of :- ");
  scanf("%d",&fact_num);
  sum = factorial(fact_num);
  printf("The Factorial of %d is %d",fact_num,sum);
return 0;
}

int factorial(int number)
{
    if(number==1 || number==0)
    {
        return 1;
    }
    else
    {
        return (number*factorial(number-1));
    }
}