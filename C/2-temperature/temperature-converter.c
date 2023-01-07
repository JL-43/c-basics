#include <stdio.h>

// creates a temperature table for fahrenheit to celsius strating from O F

// lower - lower limit of temp scale, upper - upper limit of temp scale, step - step sizes
// constants
#define LOWER 0
#define UPPER 300
#define STEP 20

// int main()
// {
//   int fahrenheit, celsius;
//   fahrenheit = LOWER;

//   while (fahrenheit <= UPPER)
//   {
//     celsius = 5 * (fahrenheit - 32) / 9;
//     printf("%d\t%d\n", fahrenheit, celsius);
//     fahrenheit = fahrenheit + STEP;
//   }

//   return 0;
// }

int main()
{
  int fahrenheit;

  for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
  {
    float celsius = (5.0 / 9.0 * (fahrenheit - 32));
    printf("%3d %6.1f\n", fahrenheit, celsius);
  }

  return 0;
}