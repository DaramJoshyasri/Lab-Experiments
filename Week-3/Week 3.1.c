#include<stdio.h>
#include<math.h>
void main()
{
 float n;
 printf("Enter a number:");
 scanf("%f",&n);
 if(n<0)
    printf("Square root is not real");
 else
    printf("Square root =%.2f",sqrt(n));   
}