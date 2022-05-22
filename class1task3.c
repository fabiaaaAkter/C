#include<stdio.h>
#include<conio.h>
void main()
{
    int sub1, sub2, sub3, sub4,sub5, total;
    float percentage;
    printf("Enter the marks of sub1: ");
    scanf("%d", &sub1);

    printf("Enter the marks of sub2: ");
    scanf("%d", &sub2);

    printf("Enter the marks of sub3: ");
    scanf("%d", &sub3);

    printf("Enter the marks of sub4: ");
    scanf("%d", &sub4);

    printf("Enter the marks of sub5: ");
    scanf("%d", &sub5);

    total = sub1+sub2+sub3+sub4+sub5;

    percentage =( total*100)/500;

    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f %%", percentage);
    getch();
}

