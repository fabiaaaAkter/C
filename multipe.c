#include<stdio.h>

int main ()
{
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);
  if(A%B==0&&A%C==0&&1<=B&&C<=A&&1<=A&&A<=10000000){
    printf("%d %d\n",B*5,C*5);
  }
}
