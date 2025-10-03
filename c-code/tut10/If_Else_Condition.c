#include<stdio.h>

int main(){
    int age;
    scanf("%d",age);
    printf("Enter your age to verify that you can vote");
    if(age>=18){
        printf("You Can Vote!");
    }
    else{
        printf("You Cannot Vote!");
    }
    return 0;
}