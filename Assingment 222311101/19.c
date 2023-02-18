#include<stdio.h>

int main()
{
    int number_of_days, years, months, days;

    /* Reading number of days from user */
    printf("Enter number of days: ");
    scanf("%d", &number_of_days);

    /* Calculating years */
    years = number_of_days / 365;

    // Calculating months
    months = (number_of_days - years *365) / 30;

    // Calculating days
    days = (number_of_days - years * 365 - months*30);

    // Displaying results
    printf("Years = %d", years);
    printf("\nMonths = %d", months);
    printf("\nDays = %d", days);

    return 0;
}
