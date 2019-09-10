#include <stdio.h>

int main(void)
{
  int x = 50, y = 30;
  printf("x = %d, y = %d\n", x, y);
  printf("Is x bigger than y and y is smaller than 40?  %d\n", (x > y) && (y < 40));
  printf("Is x smaller than y or y is 30? %d\n", (x < y) || (y == 30));
  printf("x is not 50?  %d\n", x != 50);
  return 0;
}
