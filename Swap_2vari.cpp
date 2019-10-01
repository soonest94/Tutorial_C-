#include <stdio.h>

// The pointer func that swap 2 variables
void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main(void)
{
  int x = 1;
  int y = 2;
  swap(&x, &y);
  printf("x = %d\ny = %d\n", x, y);
  return 0;
}
