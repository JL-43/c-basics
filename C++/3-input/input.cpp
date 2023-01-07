
#include <stdio.h>

int main()
{
  char str[100];
  int i;

  printf("Enter a string: ");
  // scanf("%s %d", str, &i);
  scanf("%s", str);
  printf("%s\n", str);
  printf("Enter an int: ");
  scanf("%d", &i);
  printf("%d\n", i);

  return 0;
}