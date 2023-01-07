#include <stdio.h>

// creates a temperature table for fahrenheit to celsius strating from OF

int main()
{
  int fahrenheit, celsius;
  int lower, upper, step;

  // lower - lower limit of temp scale, upper - upper limit of temp scale, step - step sizes
  lower = 0;
  upper = 300;
  step = 20;

  fahrenheit = lower;

  while (fahrenheit <= upper)
  {
    celsius = 5 * (fahrenheit - 32) / 9;
    printf("%d\t%d\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }

  return 0;
}
