#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,d;
	printf("Enter a four digit number : ");
	scanf("%d", &num);
	d=num%10;

	a=(num/1000);
	printf("%d is the sum of the 1st and last digits of the number %d.", a+d, num);
	getch();
	return 0;
}
