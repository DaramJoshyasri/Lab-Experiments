#include<stdio.h>
void main()
{
  int A,B,C,D,E,F,G,J,i,Result1,Result2,Result3,Result4;
  printf("Enter A,B,C,D,E,F,G,J,i");
  scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G);
  Result1 = A+B*C+D*E+F*G;
  printf("\nA+B*C+(D*E)+F*G=%d",Result1);
  Result2 = A/B*C-B+A*D/3;
  printf("\nA/B*C-B+A*D/3=%d",Result2);
  Result3 = A+++B---A;
  printf("\nA+++B---A=%d",Result3);
  Result4 = J = (i++)+(++i);
  printf("\nJ=(i++)+(++i)",Result4);
}