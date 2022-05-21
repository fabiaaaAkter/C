
#include<stdio.h>
int main ()
{
int a,b,c;
 scanf("%d%d%d",&a,&b,&c);

if(a*a+b*b==c*c)
{
  printf("this is right triangle");
}

else if(a==b&&a!=c)
 {
   printf("this is isosclese triangle");
 }
  else
  {
    printf("that is not triangle" );
  }
  return 0 ;
}
