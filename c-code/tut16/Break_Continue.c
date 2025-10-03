#include<stdio.h>

int main()
{
    int i,age;
    for(i=0; i<10; i++){
        printf("%d\nEnter Your Age\n",i);
        scanf("%d",&age);

       if(age>8){
          
            continue;
          
        }
        printf("CHECK1\n");
          printf("CHECK2\n");
            printf("CHECK3\n");
    }
return 0;
}