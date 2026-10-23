#include<stdio.h>
void main()
{
  int M1,M2,M3,M4,M5,Total;
  float Average;
  printf("Enter marks of five subjects:");
  scanf("%d%d%d%d%d",&M1,&M2,&M3,&M4,&M5);
  Total = M1+M2+M3+M4+M5;
  Average = Total/5.0;
  printf("\nTotal = %d",Total);
  printf("Average = %.2f",Average);
}