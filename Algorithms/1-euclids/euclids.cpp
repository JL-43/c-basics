#include <stdio.h>

// Reduce a given fraction to its lowest terms
// AKA Find the Greatest Common Divisor (GCD)

int gcd(int firstNumber, int secondNumber)
{
  int temporaryHolder;

  while (firstNumber > 0)
  {
    if (firstNumber < secondNumber)
    {
      temporaryHolder = firstNumber;
      firstNumber = secondNumber;
      secondNumber = temporaryHolder;
    }
    firstNumber = firstNumber - secondNumber;
    printf("%d", secondNumber);
    return secondNumber;
  }
}

int main()
{
  int x, y;
  while (scanf("%d %d", &x, &y) != EOF)
  {
    if (x > 0 && y > 0)
    {
      printf("%d %d %d\n", x, y, gcd(x, y));
    }
  }
  return 0;
}