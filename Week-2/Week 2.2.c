#include<stdio.h>
void main()
{
 float c,f;
 printf("Enter temperature in Celsius:");
 scanf("%f",&c);
 f = (c*9.0/5.0)+32;
 printf("\nFahrenheit = %.2f",f);
 printf("Enter temperature in Fahrenheit:");
 scanf("%f",&f);
 c=(f-32)*5.0/9.0;
 printf("Celsius = %.2f",c);
}