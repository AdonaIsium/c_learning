#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F))ahrenheit or (C)elsius? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nPlease enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Fahrenheit is: %.1f\n", temp);
    }
    else if (unit == 'F')
    {
        printf("\nPlease enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("\nThe temperature in Celsius is: %.1f\n", temp);
    }
    else
    {
        printf("\n%c is not a valid unit!\n", unit);
        return 1;
    }
    return 0;
}