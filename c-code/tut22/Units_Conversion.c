#include<stdio.h>
int calculate();
int main()
{
  
    calculate();
    return 0;
}   

int calculate(){
      printf("\n\nWhat you want to measure\n\n");

    printf("1.kms to miles\n");
     printf("2.miles to kms\n\n");

    printf("3.inches to foot\n");
    printf("4.foot to inches\n\n");

    printf("5.pound to kgs\n");
    printf("6.kgs to pound\n\n");

    printf("7.inches to meters\n");
    printf("8.meters to inches\n\n");

    printf("Enter the value From Given List :- \n");
   int unit;

   scanf("%d",&unit);


    if(unit==1)
      {
        
        float km_to_mile;  
        
       printf("You Have Choose KMS to miles\n");
       printf("Enter KM to calculate..\n");
       scanf("%f",&km_to_mile);
       km_to_mile = km_to_mile/1.609;
       printf(">> %f\n",km_to_mile);
     
      }
        else if (unit==2)
      {
          float mile_to_kms;  
       printf("You Have Choose MILES to KMS\n");
       printf("Enter MILES to calculate..\n");
       scanf("%f",&mile_to_kms);
       mile_to_kms = mile_to_kms*1.609;
       printf(">> %f\n",mile_to_kms);
      }


      else if (unit==3)
      {
          float in_to_foot;  
       printf("You Have Choose INCH to FOOT\n");
       printf("Enter INCH to calculate..\n");
       scanf("%f",&in_to_foot);
       in_to_foot = in_to_foot/12;
       printf(">> %f\n",in_to_foot);
      }

        else if (unit==4)
      {
          float foot_to_inch;  
       printf("You Have Choose FOOT to INCHES\n");
       printf("Enter FOOT to calculate..\n");
       scanf("%f",&foot_to_inch);
       foot_to_inch= foot_to_inch*1.609;
       printf(">> %f\n",foot_to_inch);
      }


      else if (unit==5)
      {
          float pound_to_kg;  
       printf("You Have Choose POUND to KG\n");
       printf("Enter POUND to calculate..\n");
       scanf("%f",&pound_to_kg);
       pound_to_kg = pound_to_kg/2.205;
       printf(">> %f\n",pound_to_kg);
      }
       else if (unit==6)
      {
          float kgs_to_pound;  
       printf("You Have Choose KGS to POUND\n");
       printf("Enter KG to calculate..\n");
       scanf("%f",&kgs_to_pound);
       kgs_to_pound= kgs_to_pound*2.205;
       printf(">> %f\n",kgs_to_pound);
      }


       else if (unit==7)
      {
          float in_to_meters;  
       printf("You Have Choose INCHES to METERS\n");
       printf("Enter INCHES to calculate..\n");
       scanf("%f",&in_to_meters);
       in_to_meters = in_to_meters/39.37;
       printf(">> %f\n",in_to_meters);
      }
      
        else if (unit==8)
      {
          float meter_to_in;  
       printf("You Have Choose METERS to INCHES\n");
       printf("Enter METERS to calculate..\n");
       scanf("%f",&meter_to_in);
       meter_to_in= meter_to_in*39.37;
       printf(">> %f\n",meter_to_in);
      }

      else{

        printf("None of them!");
      }
return calculate();
}