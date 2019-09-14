#include <stdio.h>

int main(void)
{
  int x, i;
  printf("Put a integer: ");
  scanf("%d", &x);
  for(i = 1; i <= 9; i++)
  {
    printf("%d X %d = %d\n", x, i, x * i);
  }
  return 0;
}
