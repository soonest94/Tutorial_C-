#include <stdio.h>

int main(void)
{
  int x, y;
  // x = y  -> x와 y가 같은 상황 그 자체.
  // x == y -> true인 경우, x와 y가 같은 값을 가지고 있음을 의미.

  scanf("%d %d", &x, &y);
  printf("Is x same with y? %d\n", x == y);
  printf("Isn't x same with y? %d\n", x != y);
  printf("Is x bigger than y? %d\n", x > y);
  printf("Is x smaller than y? %d\n", x < y);
  return 0;
}
