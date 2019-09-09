#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
  int x;
  scanf("%d", &x);
  int minute = x / SECOND_PER_MINUTE;
  int second = x % SECOND_PER_MINUTE;

  printf("%dsecond(s) is %dminute(s) and %dsecond(s)", x, minute, second);
  return 0;
}
