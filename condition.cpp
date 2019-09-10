#include <stdio.h>

int main(void)
{
  int x, y;
  scanf("%d %d", &x, &y);
  int absoluteX = (x > 0) ? x : -x;
  // absoluteX라는 변수는, (x > 0)이 true라면 x를, false라면 -x를 반환한다.
  int max = (x > y) ? x : y;
  // max라는 변수는, (x > y)이 true라면 x를, false라면 y를 반환한다.
  int min = (x < y) ? x : y;
  // min라는 변수는, (x < y)이 true라면 x를, false라면 y를 반환한다.

  printf("Absolute value of x is %d.\n", absoluteX);
  printf("Maximum value between x and y is %d.\n", max);
  printf("Minimum value between x and y is %d.\n", min);
  return 0;
}
