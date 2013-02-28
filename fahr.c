#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 5, 10, ... , 200 */
main()
{
float fahr, celsius;
int lower, upper, step;

lower = 0;
upper = 200;
step = 5;

fahr = lower;
while (fahr <= upper) {
celsius = (5.0/9.0) * (fahr-32.0);
printf("%3.0f %6.1f\n", fahr, celsius);
fahr = fahr + step;
}
}
