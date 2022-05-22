#include<stdio.h>
int main()
{
    float km, m, cm, f, in;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    /* calculate the conversion */
    m = km * 1000;//1km=1000meters
    cm = km * 1000 * 100; //1km=100000 centimeter
    f = km * 3280.84; //1km=3280.8399 feets
    in = km * 39370.08;//1km=39370.078 inches
    printf("The distance in Feet: %f\n", f);
    printf("The distance in Inches: %f\n", in);
    printf("The distance in Meters: %f\n", m);
    printf("The distance in Centimeters: %f\n", cm);
    return 0;
}
