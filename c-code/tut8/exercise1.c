#include<stdio.h>
/*
Print multiplication table of a number entered by the user 
in pretty form

Example:

Input-
Enter the number you want multiplication table of 
6
Output-
table of 6:


*/
int main(){
    int table;
    printf("Enter the number you want multiplication table of:- ");
    scanf("%d",&table);
    
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n",table,i,table*i);
    }
    return 0;
}