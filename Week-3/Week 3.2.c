#include<stdio.h>
#include<math.h>
void main()
{
 float p,r,t,amount,ci;
 printf("Enter principal,rate and time:");
 scanf("%f%f%f",&p,&r,&t);
 amount = p*pow(1+r/100,t);
 ci = amount - p;
 printf("Compound Interest = %.2f",amount);
}