#include <stdio.h>

int main(void)
{
  int x = 100;
  printf("x = %d.\n", x);
  x += 50;      // x = x + 50;
  printf("x += 50 -> x = %d.\n", x);
  x -= 50;      // x = x - 50;
  printf("x -= 50 -> x = %d.\n", x);
  x *= 50;      // x = x * 50;
  printf("x *= 50 -> x = %d.\n", x);
  x /= 50;      // x = x / 50;
  printf("x /= 50 -> x = %d.\n", x);
  x %= 3;
  printf("x %%= 3 -> x = %d.\n", x);
  return 0;
}
