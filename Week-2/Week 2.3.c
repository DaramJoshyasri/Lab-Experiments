#include<stdio.h>
void main()
{
 float p,r,t,si;
 printf("Enterprises principal,rate and time :");
 scanf("%f%f%f",&p,&r,&t);
 si=(p*r*t)/100;
 printf("Simple Interest = %.2f",si);
}