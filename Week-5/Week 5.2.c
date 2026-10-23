#include<stdio.h>
void main()
{
  float units,bill;
  printf("Enterprises units consumed :");
  scanf("%f",&units);
  if(units<0)
     printf("Bill = Rs.%.2f",bill);
  else if (units<=100)   
   { 
     bill = units*1.50;
     printf("Bill = Rs.%.2f",bill);
   }
  else if (units<=200) 
   { 
     bill = units*2.50;
     printf("Bill = Rs.%.2f",bill);
   }
  else if (units<=500) 
   {
     bill = units*4.00;
     printf("Bill = Rs.%.2f",bill);
   }
}