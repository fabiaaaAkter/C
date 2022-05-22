#include<stdio.h>
int main()
{
      int a,b,addition,substraction,multiply,division,divisible;

      printf("enter the value of a:");
      scanf("%d",&a);
      printf("enter the value of b:");
      scanf("%d",&b);
      addition=a+b;
      substraction=a-b;
      multiply=a*b;
      division=a/b;
      divisible=a%b;

      printf("addition=%d\n",addition);
      printf("substraction=%d\n",substraction);
      printf("multiply=%d\n",multiply);
      printf("division=%d\n",division);
      printf("divisilbe=%d",divisible);


      return 0;
}
