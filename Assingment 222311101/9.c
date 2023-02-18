#include<stdio.h>

void main()
{
    float celsius,fahrenheit;

    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);


    celsius=(fahrenheit - 32)*5/9;

    printf("\nCelsius = %.3f",celsius);
    return 0;
}
