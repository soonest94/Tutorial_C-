#include <stdio.h>

int main(void)
{
  int x;
  scanf("%d", &x);
  if(x < 0)
  {
    x = -x;
  }
  printf("Absolute value of x is %d.\n", x);
  return 0;
}
