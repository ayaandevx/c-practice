#include<stdio.h>

struct Driver
{
    char name[35];
    char dlno[45];
    char route[47];
    int kms;
};
int main()
{
    struct Driver  d1,d2,d3;

    // D1
    printf("Enter the details of the driver no1\n");
    
    printf("Enter the name of First Driver\n");
    scanf("%s",&d1.name);
    printf("Enter the dlno of First Driver\n");
      scanf("%s",&d1.dlno);
    printf("Enter the route of First Driver\n");
      scanf("%s",&d1.route);
    printf("Enter the kms of First Driver\n");
      scanf("%d",&d1.kms);

        // D2
    printf("\nEnter the details of the driver no2\n");
    
    printf("Enter the name of Second Driver\n");
    scanf("%s",&d2.name);
    printf("Enter the dlno of Second Driver\n");
      scanf("%s",&d2.dlno);
    printf("Enter the route of Second Driver\n");
      scanf("%s",&d2.route);
    printf("Enter the kms of Second Driver\n");
      scanf("%d",&d2.kms);  

           // D3
    printf("\nEnter the details of the driver no3\n");
    
    printf("Enter the name of Third Driver\n");
    scanf("%s",&d3.name);
    printf("Enter the dlno of Third Driver\n");
      scanf("%s",&d3.dlno);
    printf("Enter the route of Third Driver\n");
      scanf("%s",&d3.route);
    printf("Enter the kms of Third Driver\n");
      scanf("%s",&d3.kms);  


      printf("******** Printing Information of these drivers: *********");
      printf("\nFOR Driver no1:\nName :- %s\n",d1.name);
      printf("DL~NO :- %s\n",d1.dlno);
      printf("route :- %s\n",d1.route);
      printf("kms :- %d\n",d1.kms);


      printf("\n\nFOR Driver no2:\nName :- %s\n",d2.name);
      printf("DL~NO :- %s\n",d2.dlno);
      printf("route :- %s\n",d2.route);
      printf("kms :- %d\n",d2.kms);

     printf("\n\nFOR Driver no3:\nName :- %s\n",d3.name);
      printf("DL~NO :- %s\n",d3.dlno);
      printf("route :- %s\n",d3.route);
      printf("kms :- %d\n",d3.kms);

    return 0;
}