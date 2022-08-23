#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Code to calculate temperature
int main()
{
    char unit;
    double temp;

    printf("\n Is the temperature in (F) or (C): ");
    scanf("%c", &unit);

    if (unit == 'C' || unit == 'c')
    {
        printf("\nEnter temperature in C: ");
        scanf("%lf", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature is : %.2lfF", temp);
    }
    else if (unit == 'F' || unit == 'f')
    {
        printf("\nEnter temperature in F: ");
        scanf("%lf", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("\n The temperature is %.2lfC", temp);
    }
    else
    {
        printf("\n%c is not a vaid unit of measurement", &unit);
    }

    return 0;
}