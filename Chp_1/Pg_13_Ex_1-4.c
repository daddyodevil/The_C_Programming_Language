#include <stdio.h>

/*  print Celsius-Fahrenheit table with headers
    for fahr = 0, 20, ..., 300; floating point version */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Temperature conversion table\n");
    printf("Celsius\tFahrenheit\n");
    celsius = lower;
    while (celsius<=upper)
    {
        fahr = ((celsius*9.0) / 5.0) + 32.0;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }

}

